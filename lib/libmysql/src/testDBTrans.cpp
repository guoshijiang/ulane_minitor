#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ulaneMysql.h"

#define DROP_SAMPLE_TABLE "DROP TABLE IF EXISTS test_table"
#define CREATE_SAMPLE_TABLE "CREATE TABLE test_table(col1 INT,\
                                                 col2 VARCHAR(10),\
                                                 col3 VARCHAR(10))"
                                                                                     
#define aSql "INSERT INTO test_table(col1,col2,col3) VALUES(10, 'AAA', 'A1')"
#define bSql "INSERT INTO test_table(col1,col2,col3) VALUES(20, 'BBB', 'B2')"
#define cSql "INSERT INTO test_table(col1,col2,col3) VALUES(30, 'CCC', 'C3')"
#define dSql "INSERT INTO test_table(col1,col2,col3) VALUES(40, 'DDD', 'D4')"

int main(void)
{
	int                 iRet        = 0;
	ULANESTR            iHost       = "localhost";
	ULANESTR            iUser       = "root";
	ULANESTR            iPasswd     = "123456";
	ULANESTR            iDbName     = "mydb1";
	ULANEUNSIGNINT      iPort       =  0;
	ULANESTR            iUnixSock   = NULL;
	ULANELONG           iClientFlag = 0; 
	
	//初始化数据
	ULANESQL uSql = UlaneDB_init(NULL);
	
	//连接数据库
	uSql = UlaneDB_Connect(uSql, iHost, iUser, iPasswd, iDbName, iPort, iUnixSock, iClientFlag);
	if(uSql == NULL)
	{
		iRet = UlaneDB_Erron(uSql);
		printf("func UlaneDB_Connect() err：%d\n", iRet);
		return iRet;
	} 	
	printf("connect database ok\n");	
	
	//删除表
	if(UlaneDB_ExecSql(uSql, DROP_SAMPLE_TABLE))
  {
	  fprintf(stderr, "drop table failed\n");
	  fprintf(stderr, "%s\n", UlaneDB_Erron(uSql));
	  exit(0);
	}
	//创建表
	if (UlaneDB_ExecSql(uSql, CREATE_SAMPLE_TABLE))
  {
	  fprintf(stderr, "create table failed\n");
	  fprintf(stderr, " %s\n", UlaneDB_Erron(uSql));
	  exit(0);
	}	
	
	//开启事务
	iRet = UlaneDB_StartTrans(uSql); 	
	if (iRet != 0) 
	{
		printf("UlaneDB_StartTrans() err:%d\n", iRet);
		return iRet;
	}
	
	//并修改事务属性为手动commit 
	iRet = UlaneDB_OperationTran(uSql); 	
	if (iRet != 0) 
	{
		printf("UlaneDB_OperationTran() err:%d\n", iRet);
		return iRet;
	}
	
	//向表中插入第一行数据
	iRet = UlaneDB_ExecSql(uSql, aSql);	
	if (iRet != 0) 
	{
		printf("UlaneDB_ExecSql() err:%d\n", iRet);
		return iRet;
	}
	
	//向表中插入第二行数据
	iRet = UlaneDB_ExecSql(uSql, bSql);	
	if (iRet != 0) 
	{
		printf("UlaneDB_ExecSql() err:%d\n", iRet);
		return iRet;
	}
	
	//手动提交事务
	iRet = UlaneDB_Commit(uSql); 			
	if (iRet != 0) 
	{
		printf("UlaneDB_Commit() err:%d\n", iRet);
		return iRet;
	}
	
#if 0
  //修改事务属性为自动commit
	iRet = UlaneDB_AutoTran(uSql); 		
	if (iRet != 0) 
	{
		printf("UlaneDB_AutoTran() err:%d\n", iRet);
		return iRet;
	}
#else 
	//修改事务属性为手动commit
	iRet = UlaneDB_OperationTran(uSql); 
	if (iRet != 0) 
	{
		printf("UlaneDB_OperationTran() err:%d\n", iRet);
		return iRet;
	}
#endif

	//向表中插入第三行数据
	iRet = UlaneDB_ExecSql(uSql, cSql);	
	if (iRet != 0)
  {
		printf("mysql_query() err:%d\n", iRet);
		return iRet;
	}
	
	//向表中插入第四行数据
	iRet = UlaneDB_ExecSql(uSql, dSql);	
	if (iRet != 0)
  {
		printf("mysql_query() err:%d\n", iRet);
		return iRet;
	}
	
	//直接rollback操作
	iRet = UlaneDB_Rollback(uSql);		
	if (iRet != 0) 
	{
		printf("UlaneDB_Rollback() err:%d\n", iRet);
		return iRet;
	}
	UlaneDB_Close(uSql);
	return 0;	
}