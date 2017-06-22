/*=============================================================
 *�ļ�����: ulaneStmtMysql.c
 *����ʱ��: 2017.6.22
 *��    ��: ������
 *�޸ļ�¼:
 *2017.6.22 �����ļ�
 *����������mysqlԤ�����װ 
 * ===========================================================*/
#include <stdlib.h>
#include <unistd.h>
#include "ulaneMysql.h"
#include "ulaneStmtMysql.h"

//�������Ͷ���
typedef   MYSQL_STMT*     ULANESTMT;
typedef   my_bool         ULANEBOOL;
typedef   MYSQL_BIND*     ULANEBIND;

//����������õ����API�����Ĵ������
ULANEUNSIGNINT ULANE_StmtErrno(ULANESTMT iStmt)
{
	return mysql_stmt_errno(iStmt); 
}

//�����˴�����ַ��������δ���ִ��󣬷��ؿ��ַ���
ULANESTR ULANE_StmtError(ULANESTMT iStmt)
{
	return mysql_stmt_error(iStmt); 
}

//����MYSQL_STMT���
ULANESTMT ULANE_StmtInit(ULANESQL uSql)
{
	ULANESTMT  iStmtRet;
	if(uSql == NULL)
	{
		printf("uSql is NULL%s\n");
		exit(0);	
	}
	iStmtRet = mysql_stmt_init(uSql);
	if(uSql == NULL)
	{
		printf("CR_OUT_OF_MEMORY\n");	
		exit(0);	
	}
	return iStmtRet;
}

//��Ԥ�����������Ӵ�ռλ����sql���
ULANEINT ULANE_StmtPrepare(ULANESTMT iStmtRet, ULANESTR uSql, ULANELONG uSqLen)
{
	ULANEINT    iRet;
	if(iStmtRet == NULL || uSql == NULL || uSqLen == 0)
	{
		printf("iStmtRet, uSql and uSqLen is NULL");
		return ULANE_StmtErrno(iStmtRet);
	}
	iRet = mysql_stmt_prepare(iStmtRet, uSql, uSqLen);
	if(iRet != 0)
  {
	  printf("stmt prepare error\n");
	  return ULANE_StmtErrno(iStmtRet);
	}
	return iRet;
}

//����Ԥ��������в�����Ƿ�����Ŀ
ULANELONG ULANE_StmtParamCount(ULANESTMT iStmtRet)
{
	ULANELONG       iParamCount;
	if(iStmtRet == NULL)
	{
		printf("iStmtRet is NULL\n");	
		exit(0);
	}
	iParamCount = mysql_stmt_param_count(iStmtRet);
	if(iParamCount == 0)
	{
		printf("iParamCount == 0");	
		exit(0);
	}
	return iParamCount;
}

//�Ѹ�ֵ�Ժ������ ��ӵ�Ԥ���������
ULANEBOOL ULANE_StmtBindParam(ULANESTMT iStmtRet, ULANEBIND IBind)
{
	ULANEBOOL  iBool;
	if(iStmtRet == NULL || IBind == NULL)
	{
		printf("iStmtRet and IBind is NULL\n");	
		return _FALSE_;
	}
	iBool = mysql_stmt_bind_param(iStmtRet, IBind);
	if(iBool)
	{
		printf( "bind param failed\n");
	  printf("%s\n", ULANE_StmtErrno(iStmtRet));
		return _FALSE_;
	}
	return iBool;
}

//ִ���Ѿ���ȫ���ֵ��SQL���
ULANEINT ULANE_StmtExecute(ULANESTMT iStmtRet)
{
	ULANEINT  iRet;
	if(iStmtRet == NULL)
	{
		printf("iStmtRet is NULL\n");	
		return -1;
	}
	iRet = mysql_stmt_execute(iStmtRet);
	if(iRet != 0)
	{
		printf("mysql_stmt_execute err\n");	
		return -1;
	}
	return iRet;
}

//ȡ����"stmt"ָ������������
ULANEBOOL ULANE_StmtClose(ULANESTMT iStmtRet)
{
	return mysql_stmt_close(iStmtRet);
}
