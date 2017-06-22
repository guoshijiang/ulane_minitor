#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include <unistd.h>
#include <errno.h>
#include <termios.h>
#include "ulaneMysql.h"
#include "ulaneStmtMysql.h"

#define STRING_SIZE 50

#define DROP_SAMPLE_TABLE "DROP TABLE IF EXISTS test_table"			
#define CREATE_SAMPLE_TABLE "CREATE TABLE test_table(col1 INT,\
                                                 col2 VARCHAR(40),\
                                                 col3 SMALLINT,\
                                                 col4 TIMESTAMP)"                                             
#define INSERT_SAMPLE "INSERT INTO test_table(col1,col2,col3) VALUES(?,?,?)"

int main()
{
	ULANEINT 			      iRet = 0;
	ULANEINT            i=0;
	ULANESQL 			      uSql;
	ULANESQLRES         iResult;
	ULANESQLROW		      iRow;
	ULANEFIELD 	        iFields;
	ULANEUNSIGNINT 	    iNumFields;
	ULANESTR            iHost       = "localhost";
	ULANESTR            iUser       = "root";
	ULANESTR            iPasswd     = "123456";
	ULANESTR            iDbName     = "mydb1";
	ULANEUNSIGNINT      iPort       =  0;
	ULANESTR            iUnixSock   = NULL;
	ULANELONG           iClientFlag = 0; 
  ULANESTMT           iStmt;
	ULANEBINDSTR        iBind[3];							//�ṹ������
	my_ulonglong        iAffectedRows;
	ULANEINT            iParamCount;
	ULANESHORT          iSmallData;
	ULANEINT            iIntData;
	ULANECHA            iStrData[STRING_SIZE];
	ULANELONG           iStrLength;
	ULANEBOOL           iIsNull;
	 
	uSql = UlaneDB_init(NULL);
	if (uSql == NULL) 
	{
		iRet =  UlaneDB_Erron(uSql) ;
		printf("init error, %s\n", UlaneDB_Erron(uSql));
		goto END;
	}
	uSql = UlaneDB_Connect(uSql,iHost,iUser,iPasswd,iDbName,iPort,iUnixSock,iClientFlag);
	if (uSql == NULL) 
	{
		iRet =  UlaneDB_Erron(uSql) ;
		printf("connect error, %s\n", UlaneDB_Erron(uSql));
		goto END;
	}
	//ɾ����
	if (UlaneDB_ExecSql(uSql, DROP_SAMPLE_TABLE))
  {		
	  printf("drop failed\n");
	  printf("%s\n", UlaneDB_Erron(uSql));
	  exit(0);
	}
	//������
	if (UlaneDB_ExecSql(uSql, CREATE_SAMPLE_TABLE)) 
	{
	  printf("create table failed\n");
	  printf("%s\n", UlaneDB_Erron(uSql));
	  exit(0);
	}
	//��ʼ��Ԥ���������
	iStmt = ULANE_StmtInit(uSql); 					
	if (!iStmt) 
	{
	  printf("ULANE_StmtInit(), out of memory\n");
	  exit(0);
	}
	//��Ԥ�����������Ӵ�(???)��sql���
	if(ULANE_StmtPrepare(iStmt, INSERT_SAMPLE, strlen(INSERT_SAMPLE))) 
	{
	  printf("ULANE_StmtPrepare(), INSERT failed\n");
	  printf("%s\n", ULANE_StmtErrno(iStmt));
	  exit(0);
	}
	printf("prepare INSERT successful\n");
	//�����Ժ�����ȡվλ������
	iParamCount = ULANE_StmtParamCount(iStmt);		
	printf("total parameters in INSERT: %d\n", iParamCount);
	if (iParamCount != 3)
	{ 						
	  printf("invalid parameter count returned by DB\n");
	  exit(0);
	}
  memset(iBind, 0, sizeof(iBind));
  iBind[0].buffer_type= MYSQL_TYPE_LONG;
	iBind[0].buffer= (char *)&iIntData;			     //1
	iBind[0].is_null= 0;  
	iBind[0].length= 0;	                         
	iBind[1].buffer_type= MYSQL_TYPE_STRING;
	iBind[1].buffer= (char *)iStrData;			     //2
	iBind[1].buffer_length= STRING_SIZE;
	iBind[1].is_null= 0;
	iBind[1].length= &iStrLength;				         //3
	 
	iBind[2].buffer_type= MYSQL_TYPE_SHORT;
	iBind[2].buffer= (char *)&iSmallData;		     //4
	iBind[2].is_null= &iIsNull;			 		         //5
	iBind[2].length= 0;
	 
	//�Ѹ�ֵ�Ժ������ ��ӵ�Ԥ���������
	if (ULANE_StmtBindParam(iStmt,iBind))
	{ 		
	  printf("ULANE_StmtBindParam() failed\n");
	  printf("%s\n", ULANE_StmtErrno(iStmt));
	  exit(0);
	}
	 
	iIntData = 10;            							          //1
	strncpy(iStrData, "MySQL", STRING_SIZE); 					//2
	iStrLength= strlen(iStrData);								      //3 
	//1��ʾ��ֵΪNULL�� 0��ʾ��NULL	
	iIsNull= 1;		                                	  //5
	
	//ִ���Ѿ���ȫ���ֵ��SQL��䣬�����˵�һ������ 
	if (ULANE_StmtExecute(iStmt)) 
	{ 		
	  printf("ULANE_StmtExecute(), 1 failed\n");
	  printf("%s\n", ULANE_StmtErrno(iStmt));
	  exit(0);
	}
	iAffectedRows= mysql_stmt_affected_rows(iStmt);
	printf("total affected rows(insert 1): %lu\n",(unsigned long)iAffectedRows);
	if (iAffectedRows != 1)
  { 
	  printf("invalid affected rows by databASE\n");
	  exit(0);
	} 
	//1
	iIntData= 1000;																	   
	//2
	strncpy(iStrData, "qqqqq", STRING_SIZE);
	//3
	iStrLength= strlen(iStrData);	
	//4								
	iSmallData= 1000;
	//5         												
	iIsNull= 0;               												
	
	//��ִ��������ֵ��SQL��䡣 �����˵ڶ�������
	if (ULANE_StmtExecute(iStmt))
	{  		
	  fprintf(stderr, " mysql_stmt_execute, 2 failed\n");
	  fprintf(stderr, " %s\n", ULANE_StmtErrno(iStmt));
	  exit(0);
	}
	iAffectedRows= mysql_stmt_affected_rows(iStmt);
	printf("total affected rows(insert 2):%lu\n",(unsigned long)iAffectedRows);
	if (iAffectedRows != 1) 
	{
	  printf("invalid affected rows by DB\n");
	  exit(0);
	}
	if (ULANE_StmtClose(iStmt))	
	{
	  printf("failed while closing the statement\n");
	  printf("%s\n", ULANE_StmtErrno(iStmt));
	  exit(0);
	}
END:		
	if (uSql != NULL)
	{
		UlaneDB_Close(uSql);				
	}
	return 0;
}
