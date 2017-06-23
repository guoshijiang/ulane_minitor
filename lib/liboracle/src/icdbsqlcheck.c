#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

#include "icmemory.h"
#include "icdblog.h"

#define LEVEL 1

static void Sql_Deal(char* sql)
{
	char tmpsql[4096];
	
	while(strcmp(sql, ""))
	{
		if(sql[0] == '\'')
		{
			memset(tmpsql, 0, sizeof(tmpsql));
			strcpy(tmpsql, sql+1);
			sql[1] = '\'';
			sql[2] = '\0';
			strcat(sql, tmpsql);
			sql +=2;
		}
		else
		if(sql[0] == '&')
		{			
			memset(tmpsql, 0, sizeof(tmpsql));
			strcpy(tmpsql, sql+1);
			sql[0] = '\0';
			strcat(sql, "'||'&'||'");
			strcat(sql, tmpsql);
			sql +=9;
		}
		else
		{
			sql++;
		}
	}
	
	return ;
}


static void Sql_Combo(char* sql1, char* sql2, char* sql3)
{
	char* tmpsql = NULL;
	
	tmpsql = (char*)malloc(strlen(sql2)+1);
	if(!tmpsql)
	{
		return;
	}
	memset(tmpsql, 0, strlen(sql2)+1);
	strcpy(tmpsql, sql2);
	tmpsql[0] = '\'';
	
	sql1[0] = '\'';
	sql1[1] = '\0';
	strcat(sql1, sql3);
	strcat(sql1, tmpsql);
	
	if(tmpsql)
	{
		free(tmpsql);
	}
	
	return ;
}


char* Sql_Check(char* sql)
{
	char* newsql = NULL;
	char* tmpsql2 = NULL;
	char* tmpsql3 = NULL;
	char  tmpsql[4096];
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[LEVEL], 0, "Enter Sql_Check");
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[LEVEL], 0, "SQL is: %s", sql);
	
	newsql = (char*)malloc(strlen(sql)+100);
	memset(newsql, 0, strlen(sql)+100);
	strcpy(newsql, sql);
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[LEVEL], 0, "Begin Sql_FindWhere");
		
	while(1)
	{
		tmpsql2 = strchr(newsql, '\3');
		if(!tmpsql2)
		{
			break;
		}
		tmpsql3 = strchr(tmpsql2+1, '\3');
		if(!tmpsql3)
		{
			break;
		}
		
		memset(tmpsql, 0, sizeof(tmpsql));
		memcpy(tmpsql, tmpsql2+2, tmpsql3-tmpsql2-3);
		Sql_Deal(tmpsql);
		Sql_Combo(tmpsql2, tmpsql3, tmpsql);
	}
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[LEVEL], 0, "Leave Sql_Check");
	
	return newsql;
}
