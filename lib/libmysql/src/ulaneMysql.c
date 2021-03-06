/*=============================================================
 *文件名称: ulaneMysql.c
 *创建时间: 2017.6.20
 *作    者: 郭世江
 *修改记录:
 *2017.6.20 创建文件
 *功能描述：
 *  mysql
 * ===========================================================*/
#include <assert.h>
#include <mysql.h>
#include "ulaneMysql.h"

//获取数据库的错误号
ULANEUNSIGNINT UlaneDB_Erron(ULANESQL uSql)
{
	if(uSql != NULL)
	{
		return mysql_errno(uSql);
	}
	return -1;
}

//初始化数据库
ULANESQL UlaneDB_init(ULANESQL uSql)
{
	ULANESQL iSqlHandle = mysql_init(uSql);
	if(iSqlHandle == NULL)
	{
		printf("database init err%d\n", SQLINITERR);
		return SQLINITERR;
	}
	return iSqlHandle;
}

//连接数据库
ULANESQL UlaneDB_Connect(ULANESQL uSql, ULANESTR iHost, ULANESTR iUser, ULANESTR iPasswd, ULANESTR iDbName, ULANEUNSIGNINT iPort,ULANESTR iUnixSock, ULANELONG iClientFlag)
{
	if(uSql == NULL || iHost == NULL || iUser == NULL || iPasswd == NULL) 
	{
		printf("uSql, iHost, iUser and iPasswd is NULL\n");	
		return SQLCONNECTERR;
	} 
  ULANESQL iSqlHandle = mysql_real_connect(uSql, iHost, iUser, iPasswd, iDbName, iPort, iUnixSock, iClientFlag);
  if(iSqlHandle == NULL)
  {
 		printf("database init err%d\n", SQLCONNECTERR);
		return SQLCONNECTERR;
  }
  return iSqlHandle;
}

//执行非查询的SQL语句
int UlaneDB_ExecSql(ULANESQL uSql, ULANESTR iSql)
{
	ULANEINT iExecNum;
	ULANEINT iErrNum;
	if(uSql == NULL || iSql == NULL)
	{
		printf("uSql and iSql is NULL");
		return NOSELECTSQLERR;	
	}
	iExecNum = mysql_query(uSql, iSql);
	if(iExecNum != 0)
	{
		
		iErrNum = UlaneDB_Erron(uSql);
		/*
		if(iErrNum == CR_COMMANDS_OUT_OF_SYNC)
		{
			printf("Exec cmd not by order:%d\n", iErrNum);	
			return NOSELECTSQLERR;
		}
		if(iErrNum == CR_SERVER_GONE_ERROR)
		{
			printf("MySQL Server disable:%d\n", iErrNum);	
			return NOSELECTSQLERR;
		}
		if(iErrNum == CR_SERVER_LOST)
		{
			printf("connecting with server err:%d\n", iErrNum);	
			return NOSELECTSQLERR;
		}
		if(iErrNum == CR_UNKNOWN_ERROR)
		{
			printf("unknown err:%d\n", iErrNum);	
			return NOSELECTSQLERR;
		}
		*/
		printf("mysql_query query err:%d\n", iErrNum);
		return NOSELECTSQLERR;
	}
	return 0;
}

//执行查询的SQL语句
ULANESQLRES UlaneDB_ExecQuerySqlRes(ULANESQL uSql, ULANESTR iSql)
{
	ULANEINT           i, ret;
	ULANESQLRES        iResult;

	ret = UlaneDB_ExecSql(uSql, iSql);
	if(ret == NOSELECTSQLERR)
	{
		printf("exec select no table head result sql sentence\n");
		return NULL;	
	}
	
	iResult = mysql_store_result(uSql);
	if(iResult == NULL)
	{
		printf("store result err:%d\n", UlaneDB_Erron(uSql));
		return NULL;
	}
	return iResult;
}

//获取列数
ULANEUNSIGNINT UlaneDB_GetSqlCount(ULANESQL uSql)
{
	ULANEINT iCount;
	if(uSql == NULL)
	{
		printf("uSql is NULL\n");
		return -1;
	}	
	iCount= mysql_field_count(uSql);
	if(iCount != 0)
	{
		printf("iCount=%d\n", iCount);
		return iCount;
	}
	else
	{
		printf("No Count\n");	
	}
	return 0;
}

//打印表头
ULANEFIELD UlaneDB_iFields(ULANESQLRES iResult)
{
	ULANEFIELD iFields;
	if(iResult == NULL)
	{
		printf("iResult is NULL\n");
		return NULL;	
	}
	iFields = mysql_fetch_fields(iResult);
	if(iFields != NULL)
	{
		return iFields;
	}
	return NULL;
}

//解析结果集
ULANESQLROW UlaneDB_FetchRow(ULANESQLRES iResult)
{
	ULANESQLROW iRow;
	if(iResult == NULL)
	{
		printf("iResult is NULL\n");
		return NULL;	
	}
	iRow = mysql_fetch_row(iResult);
	if( iRow != NULL) 
	{
		return iRow;	
	}
	return NULL;
}
	
//释放结果集
void UlaneFree_DBRes(ULANESQLRES iResult)
{
	mysql_free_result(iResult);
} 

//关闭数据库
void UlaneDB_Close(ULANESQL uSql)
{
	if(uSql == NULL)
	{
		mysql_close(uSql);
	}
}

//开启事务
ULANEINT UlaneDB_StartTrans(ULANESQL uSql)  			
{
	ULANEINT        iRet;
	iRet = mysql_query(uSql, "start transaction");  
	if (iRet != 0) 
	{
		printf("mysql_OperationTran query start err");
		return iRet;
	}
	return iRet;
}

//设置事务为手动提交
ULANEINT UlaneDB_OperationTran(ULANESQL uSql) 
{
	ULANEINT        iRet;
	iRet = mysql_query(uSql, SET_TRAN);
	if (iRet != 0)
	{
		printf("mysql_OperationTran query set err");
		return iRet;
	}
	return iRet;
}

//设置事务为自动提交
ULANEINT UlaneDB_AutoTran(ULANESQL uSql)
{
	ULANEINT        iRet;
	iRet = mysql_query(uSql, UNSET_TRAN);
	if (iRet != 0)
  {
		printf("mysql_OperationTran query set err");
		return iRet;
	}
	return iRet;
}

//手动提交事务
ULANEINT UlaneDB_Commit(ULANESQL uSql)
{
	ULANEINT        iRet;
	iRet = mysql_query(uSql, "COMMIT"); 
	if(iRet != 0) 
	{
		printf("commit err\n");
		return iRet;
	}
	return iRet;
}

//回滚事务		
ULANEINT UlaneDB_Rollback(ULANESQL uSql)
{
	ULANEINT        iRet;
	iRet = mysql_query(uSql, "ROLLBACK");
	if (iRet != 0) 
	{
		printf("rollback err");
		return iRet;
	}
	return iRet;
}