/*=============================================================
 *文件名称: ulaneStmtMysql.c
 *创建时间: 2017.6.22
 *作    者: 郭世江
 *修改记录:
 *2017.6.22 创建文件
 *功能描述：mysql预处理封装 
 * ===========================================================*/
#include <stdlib.h>
#include <unistd.h>
#include "ulaneMysql.h"
#include "ulaneStmtMysql.h"

//数据类型定义
typedef   MYSQL_STMT*     ULANESTMT;
typedef   my_bool         ULANEBOOL;
typedef   MYSQL_BIND*     ULANEBIND;

//返回最近调用的语句API函数的错误代码
ULANEUNSIGNINT ULANE_StmtErrno(ULANESTMT iStmt)
{
	return mysql_stmt_errno(iStmt); 
}

//描述了错误的字符串。如果未出现错误，返回空字符串
ULANESTR ULANE_StmtError(ULANESTMT iStmt)
{
	return mysql_stmt_error(iStmt); 
}

//创建MYSQL_STMT句柄
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

//向预处理环境句柄添加带占位符的sql语句
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

//返回预处理语句中参数标记符的数目
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

//把赋值以后的数组 添加到预处理环境句柄
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

//执行已经完全填好值的SQL语句
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

//取消由"stmt"指向的语句句柄分配
ULANEBOOL ULANE_StmtClose(ULANESTMT iStmtRet)
{
	return mysql_stmt_close(iStmtRet);
}
