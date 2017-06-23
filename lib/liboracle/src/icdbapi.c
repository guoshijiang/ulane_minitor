
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[17];
};
static struct sqlcxp sqlfpn =
{
    16,
    "./src/icdbapi.pc"
};


static unsigned int sqlctx = 3550339;


static struct sqlexd {
   unsigned long  sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
            short *cud;
   unsigned char  *sqlest;
            char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
   unsigned char  **sqphsv;
   unsigned long  *sqphsl;
            int   *sqphss;
            short **sqpind;
            int   *sqpins;
   unsigned long  *sqparm;
   unsigned long  **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
            int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned char  *sqhstv[4];
   unsigned long  sqhstl[4];
            int   sqhsts[4];
            short *sqindv[4];
            int   sqinds[4];
   unsigned long  sqharm[4];
   unsigned long  *sqharc[4];
   unsigned short  sqadto[4];
   unsigned short  sqtdso[4];
} sqlstm = {12,4};

/* SQLLIB Prototypes */
extern sqlcxt ( void **, unsigned int *,
                   struct sqlexd *, struct sqlcxp * );
extern sqlcx2t( void **, unsigned int *,
                   struct sqlexd *, struct sqlcxp * );
extern sqlbuft( void **, char * );
extern sqlgs2t( void **, char * );
extern sqlorat( void **, unsigned int *, void * );

/* Forms Interface */
static int IAPSUCC = 0;
static int IAPFAIL = 1403;
static int IAPFTL  = 535;
extern void sqliem( unsigned char *, signed int * );

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* CUD (Compilation Unit Data) Array */
static short sqlcud0[] =
{12,4138,852,0,0,
5,0,0,1,0,0,30,250,0,0,0,0,0,1,0,
20,0,0,0,0,0,59,265,0,0,1,1,0,1,0,3,109,0,0,
39,0,0,0,0,0,58,307,0,0,1,1,0,1,0,3,109,0,0,
58,0,0,0,0,0,27,319,0,0,4,4,0,1,0,1,97,0,0,1,10,0,0,1,10,0,0,1,10,0,0,
89,0,0,0,0,0,59,326,0,0,1,1,0,1,0,3,109,0,0,
108,0,0,0,0,0,59,331,0,0,1,1,0,1,0,3,109,0,0,
127,0,0,3,54,0,1,337,0,0,0,0,0,1,0,
142,0,0,0,0,0,60,417,0,0,0,0,0,1,0,
157,0,0,0,0,0,60,561,0,0,0,0,0,1,0,
172,0,0,4,0,0,24,1184,0,0,1,1,0,1,0,1,97,0,0,
191,0,0,5,0,0,24,1261,0,0,1,1,0,1,0,1,97,0,0,
210,0,0,6,0,0,31,1267,0,0,0,0,0,1,0,
225,0,0,7,0,0,29,1308,0,0,0,0,0,1,0,
240,0,0,8,0,0,31,1359,0,0,0,0,0,1,0,
255,0,0,9,0,0,29,1392,0,0,0,0,0,1,0,
270,0,0,10,0,0,17,1439,0,0,1,1,0,1,0,1,97,0,0,
289,0,0,10,0,0,20,1478,0,0,1,1,0,1,0,3,32,0,0,
308,0,0,10,0,0,45,1577,0,0,0,0,0,1,0,
323,0,0,10,0,0,14,1608,0,0,1,0,0,1,0,2,32,0,0,
342,0,0,10,0,0,15,1614,0,0,0,0,0,1,0,
357,0,0,10,0,0,15,1646,0,0,0,0,0,1,0,
372,0,0,10,0,0,15,1681,0,0,0,0,0,1,0,
387,0,0,11,0,0,17,1766,0,0,1,1,0,1,0,1,97,0,0,
406,0,0,11,0,0,45,1768,0,0,0,0,0,1,0,
421,0,0,11,0,0,13,1769,0,0,1,0,0,1,0,2,3,0,0,
440,0,0,11,0,0,15,1770,0,0,0,0,0,1,0,
455,0,0,12,0,0,17,1807,0,0,1,1,0,1,0,1,97,0,0,
474,0,0,12,0,0,20,1846,0,0,1,1,0,1,0,3,32,0,0,
493,0,0,12,0,0,45,1939,0,0,0,0,0,1,0,
508,0,0,12,0,0,15,1984,0,0,0,0,0,1,0,
523,0,0,12,0,0,14,1998,0,0,1,0,0,1,0,2,32,0,0,
542,0,0,12,0,0,15,2014,0,0,0,0,0,1,0,
557,0,0,12,0,0,20,2043,0,0,1,1,0,1,0,3,32,0,0,
576,0,0,12,0,0,15,2049,0,0,0,0,0,1,0,
591,0,0,12,0,0,15,2106,0,0,0,0,0,1,0,
606,0,0,13,0,0,17,2168,0,0,1,1,0,1,0,1,97,0,0,
625,0,0,13,0,0,20,2207,0,0,1,1,0,1,0,3,32,0,0,
644,0,0,13,0,0,45,2279,0,0,0,0,0,1,0,
659,0,0,13,0,0,20,2365,0,0,1,1,0,1,0,3,32,0,0,
678,0,0,13,0,0,14,2406,0,0,1,0,0,1,0,2,32,0,0,
697,0,0,13,0,0,15,2467,0,0,0,0,0,1,0,
};


#include <pthread.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <errno.h>
#include <sqlca.h>
#include <sqlda.h>
#include <sqlcpr.h>
#include "oci.h"
#include <sys/time.h> 

#include "icmemory.h"
#include "icdblog.h"
#include "icdbapi.h"
  

#ifndef IC_DEFAULT_COLNUM
#define IC_DEFAULT_COLNUM	5
#endif

#ifndef MAX_NAME_SIZE
#define MAX_NAME_SIZE		30
#endif

#define IC_DB_RETRYNUM	3

#define NDBHandle		sql_context

#define NO_SCROLL_CURSOR


char* Sql_Check(char* sql);


/*数据库连接池结构*/
typedef struct _IC_DBApi_Pool
{
	NDBHandle*			dbPool;				//数据库连接池
	int*				status;				//每条连接的状态
	int					valid;				//数据库有效连接数目
	int					nvalid;				//数据库无效连接数目
	int					bounds;				//数据库连接池的容量
	pthread_mutex_t		one_big_mutex;		//数据库连接池互斥
	pthread_cond_t		idle_cond;			//数据库连接空闲条件
	int					terminated;			//是否中止（1中止，0运行）
} IC_DBApi_Pool;


/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char gDAEslDB_db[64];
	char gDAEslDB_user[32];
	char gDAEslDB_pswd[32];
/* EXEC SQL END DECLARE SECTION; */ 



//数据库连接池
IC_DBApi_Pool	gDAEslDB_pool;

int				gDAEslDB_freeFlag = 0;


/********************************************************/
/*程 序 名：    IC_DBApi_SqldaInit                     */
/*功能描述：    sqlda结构初始化                         */
/*参数说明：    handle		数据库连接句柄				*/
/*				ppSqlda     sqlda结构二级 指针           */
/*              size        sqlda字段数目               */
/********************************************************/
static int IC_DBApi_SqldaInit(NDBHandle handle, SQLDA** ppSqlda, int size)
{
	int 	ret = 0;
	
	*ppSqlda = SQLSQLDAAlloc(handle, size, MAX_NAME_SIZE, 0);
	if(*ppSqlda == NULL)
	{
		ret = IC_DB_SQLDAINIT_ERR;
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], ret, "func IC_DBApi_SqldaInit() err, SQLSQLDAAlloc err!");
		return ret;
	}

	return ret;
}

/********************************************************/
/*程 序 名：    IC_DBApi_SqldaFree                     */
/*功能描述：    sqlda结构释放                           */
/*参数说明：    handle		数据库连接句柄				*/
/*				ppSqlda     sqlda结构二级指针           */
/********************************************************/
static int IC_DBApi_SqldaFree(NDBHandle handle, SQLDA** ppSqlda)
{
	int		ret = 0;
	
	if (ppSqlda == NULL)
	{
		ret = IC_DB_PARAM_ERR;
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], ret, "func IC_DBApi_SqldaFree() err, check (ppSqlda == NULL)");
		return ret;	
	}
	
	SQLSQLDAFree(handle, *ppSqlda);
	return ret;
}


/********************************************************/
/*程 序 名：    IC_DBApi_SetRowDataMemory              */
/*功能描述：    为字段设置存贮空间                      */
/*参数说明：    handle		数据库连接句柄				*/
/*				ppSqlda     sqlda结构二级指针           */
/*              linds       指示字段数组                */
/*				row			返回的记录					*/
/********************************************************/
static int IC_DBApi_SetRowDataMemory(NDBHandle handle, SQLDA* pSqlda, short* linds, ICDBRow* row)
{
	int		ret = 0;
	int   	i = 0;
	int   	numCols = 0;
	int    	precision = 0;
	int		scale = 0;
	int		null_ok = 0;

	numCols = pSqlda->F;
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "func IC_DBApi_SetRowDataMemory(), numCols=%d", numCols);
	
	for (i = 0; i < pSqlda->F; i++)
    {
		SQLColumnNullCheck(handle, (unsigned short *)&(pSqlda->T[i]), (unsigned short *)&(pSqlda->T[i]), &null_ok);
 		pSqlda->I[i]=&(linds[i]);
        
        switch (pSqlda->T[i])
        {
            case  1 : 
                break;
            case  2 : 
                SQLNumberPrecV6(handle, (unsigned int *)&(pSqlda->L[i]), &precision, &scale);
                if (precision == 0) 
                {
                	precision = 40;
                }
                if (scale > 0)
                {
                    pSqlda->L[i] = sizeof(float);
                }
                else
                {
                    pSqlda->L[i] = sizeof(int);
                }
                break;

            case  8 : /* LONG datatype */
                pSqlda->L[i] = 240;
                break;

            case 11 : /* ROWID datatype */
            case 104 : /* Universal ROWID datatype */
                pSqlda->L[i] = 18;
                break;

            case 12 : /* DATE datatype */
                pSqlda->L[i] = 14;
                break;
 
            case 23 : /* RAW datatype */
                break;

            case 24 : /* LONG RAW datatype */
                pSqlda->L[i] = 240;
                break;
        }

		//判断长度是否符合
/*		if (pSqlda->T[i] != 2)
		{
			if(pSqlda->L[i]+1 > row->field[i].contLen)
			{
				printf("field %d(type %d) not fit;Neet %d;Have %d;\n", i, pSqlda->T[i], pSqlda->L[i]+1, row->field[i].contLen);
				return -1;
			} 
		}
      	else
      	{
         	if(pSqlda->L[i] > row->field[i].contLen)
			{
				printf("field %d not fit;Neet %d;Have %d;\n", i, pSqlda->L[i], row->field[i].contLen);
				return -1;
			}
        }*/
        
//       	row->field[i].contLen = pSqlda->L[i];
       	pSqlda->V[i] = row->field[i].cont;

        // Coerce ALL datatypes except for LONG RAW and NUMBER to character. 
		if(pSqlda->T[i] != 24 && pSqlda->T[i] != 2 && pSqlda->T[i] != 96)
        {
        	pSqlda->L[i] += 1;
        	pSqlda->T[i] = 5;
        }
        
		if(pSqlda->T[i] == 96)
        {
        	pSqlda->T[i] = 1;
        }

        // Coerce the datatypes of NUMBERs to float or int depending on the scale. 
        if(pSqlda->T[i] == 2)
        {
       		if (scale > 0)
       		{
             	pSqlda->T[i] = 4;  //float
            }
          	else
          	{
             	pSqlda->T[i] = 3;  //int
            }
        }
    }
 
	return ret;
}


/********************************************************/
/*程 序 名：    IC_DBApi_Disconnect                    */
/*功能描述：    断开数据库连接                          */
/*参数说明：    handle		数据库连接句柄              */
/********************************************************/
static int IC_DBApi_Disconnect(NDBHandle* handle)
{
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	NDBHandle myhandle;
/* EXEC SQL END DECLARE SECTION; */ 


	
	myhandle = *handle;
	
	if(!myhandle)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "myhandle is NULL");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "func IC_DBApi_Disconnect() End");
		return 0;
	}
	
	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 

	
	//提交事务并释放连接
	/* EXEC SQL COMMIT WORK RELEASE; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 0;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )5;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode != 0 && sqlca.sqlcode != -3127)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "func IC_DBApi_Disconnect() err, COMMIT WORK RELEASE");
		
//		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
//		{
//			return IC_DB_CONNECTION_ERR;
//		}
//		
//		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Disconnect Error");
//		return IC_DB_SQLRELEASE_ERR;
	}
	
	
	/* EXEC SQL CONTEXT FREE :myhandle; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )20;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&myhandle;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(void *);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "func IC_DBApi_Disconnect() err, CONTEXT Free Error");
	}
		
	*handle = NULL;
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_PoolInit                      */
/*功能描述：    连接数据库                              */
/*参数说明：    handle  	数据库连接句柄              */
/********************************************************/
static int IC_DBApi_Connect(NDBHandle* handle)
{
	int	rv = 0;
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	NDBHandle 	myhandle = NULL;
	char 		link[256];
/* EXEC SQL END DECLARE SECTION; */ 

	struct sqlca sqlca;
	
	memset(link,0, sizeof(link));
	sprintf(link, "%s/%s@%s", gDAEslDB_user, gDAEslDB_pswd, gDAEslDB_db);
	
	//判断连接是否已经释放
	if(*handle != NULL)
	{
		rv = IC_DBApi_Disconnect(handle);
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "Before DB Connect, IC_DBApi_Disconnect Error");
//			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Connect Error");
//			return IC_DB_CONNECTION_ERR;
		}
	}
	
	//为连接句柄分配内存
	/* EXEC SQL CONTEXT  ALLOCATE :myhandle; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 1;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )39;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)&myhandle;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(void *);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "CONTEXT ALLOCATE Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Connect Error");
		return IC_DB_CONTEXTALLOCATE_ERR;
	}
	
	//绑定连接句柄
	/* EXEC SQL CONTEXT USE :myhandle; */ 
	
	
	//连接数据库	
	/* EXEC SQL CONNECT :link; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )10;
 sqlstm.offset = (unsigned int  )58;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)link;
 sqlstm.sqhstl[0] = (unsigned long )256;
 sqlstm.sqhsts[0] = (         int  )256;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlstm.sqlcmax = (unsigned int )100;
 sqlstm.sqlcmin = (unsigned int )2;
 sqlstm.sqlcincr = (unsigned int )1;
 sqlstm.sqlctimeout = (unsigned int )0;
 sqlstm.sqlcnowait = (unsigned int )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "DB Connect Error");
			
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			/* EXEC SQL CONTEXT FREE :myhandle; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )89;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (unsigned char  *)&myhandle;
   sqlstm.sqhstl[0] = (unsigned long )sizeof(void *);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         short *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned long )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


				
			return IC_DB_CONNECTION_ERR;
		}
		
		/* EXEC SQL CONTEXT FREE :myhandle; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )108;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)&myhandle;
  sqlstm.sqhstl[0] = (unsigned long )sizeof(void *);
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	
		return IC_DB_SQLCONNECT_ERR;
	}
	
	//修改连接的时间格式	
	/* EXEC SQL ALTER SESSION SET NLS_DATE_FORMAT="YYYYMMDDHH24MISS"; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "alter SESSION SET NLS_DATE_FORMAT = \"YYYYMMDDHH24MISS\"";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )127;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "ALTER SESSION SET NLS_DATE_FORMAT Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_Disconnect(&myhandle);
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "Before DB Connect, func IC_DBApi_Disconnect() Error");
			}
			return IC_DB_CONNECTION_ERR;
		}
		
		rv = IC_DBApi_Disconnect(&myhandle);
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "Before DB Connect, func IC_DBApi_Disconnect() Error");
		}
		return IC_DB_SQLALTERDATE_ERR;
	}
	
	*handle = myhandle;
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_Pool_WakeAll                  */
/*功能描述：    唤醒所有连接的阻塞状态                  */
/*参数说明：                                            */
/********************************************************/
static int IC_DBApi_Pool_WakeAll( )
{
	int rv = 0;
	
	//获取互斥锁
	rv = pthread_mutex_lock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_Pool_WakeAll pthread_mutex_lock Error");
		return IC_DB_PTHREAD_MUTEX_LOCK_ERR;
	}

	//唤醒所有连接
	pthread_cond_broadcast(&gDAEslDB_pool.idle_cond);

	//释放互斥锁
	rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_Pool_WakeAll pthread_mutex_unlock Error");
//		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Pool_WakeAll Error");
//		return IC_DB_PTHREAD_MUTEX_UNLOCK_ERR;
	}
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_PoolInit                      */
/*功能描述：    数据库连接池连接重新初始化              */
/*参数说明：    bounds      连接池容量                  */
/*              dbName      数据库名称                  */
/*              dbUser      数据库用户                  */
/*              dbPswd      数据库用户口令              */
/********************************************************/
static int IC_DBApi_PoolConnReInit()
{
	int rv = 0;
	int i = 0;
	int O = 0;
	struct sqlca sqlca;
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	NDBHandle* handle = NULL;
/* EXEC SQL END DECLARE SECTION; */ 


	//设置使用线程
	/* EXEC SQL ENABLE THREADS; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )142;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "ENABLE THREADS Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			return IC_DB_CONNECTION_ERR;
		}
		
		return IC_DB_SQLENABLETHREADS_ERR;
	}
	
	handle = gDAEslDB_pool.dbPool;

	//建立数据库连接
	for (i=0; i<gDAEslDB_pool.bounds&&O<gDAEslDB_pool.bounds*2; O++)
	{
		rv = IC_DBApi_Connect(&(gDAEslDB_pool.dbPool[i]));
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_Connect[%d] Error", i);
		}
		else
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_Connect[%d] OK", i);
			gDAEslDB_pool.status[i++] = 1;
			gDAEslDB_pool.valid++;
			gDAEslDB_pool.nvalid--;
		}		
	}
	
	//判断连接情况
	if(gDAEslDB_pool.nvalid == gDAEslDB_pool.bounds)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolConnReInit handle Connect Error");
		
		return IC_DB_CONNECT_ERR; 
	}
	
	gDAEslDB_freeFlag = 0;

	return 0;
}

/********************************************************/
/*程 序 名：    IC_DBApi_InvalidConnect                */
/*功能描述：    将连接变为无效				            */
/*参数说明：    						                */
/********************************************************/
static int IC_DBApi_InvalidConnect()
{
	int rv = 0;
	int	i = 0;
	
	//获取互斥锁
	rv = pthread_mutex_lock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect pthread_mutex_lock Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_InvalidConnect Error");
		return IC_DB_PTHREAD_MUTEX_LOCK_ERR;
	}


	//将所有连接状态置为损坏
	for(i=0; i<gDAEslDB_pool.bounds; i++)
	{
		gDAEslDB_pool.status[i] = 0;
	}

	//释放互斥锁
	rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect pthread_mutex_unlock Error");
//		return IC_DB_PTHREAD_MUTEX_UNLOCK_ERR;
	}

	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_PoolInit                      */
/*功能描述：    数据库连接池初始化                      */
/*参数说明：    bounds      连接池容量                  */
/*              dbName      数据库名称                  */
/*              dbUser      数据库用户                  */
/*              dbPswd      数据库用户口令              */
/********************************************************/
__attribute__ ((visibility("default"))) int IC_DBApi_PoolInit(int bounds, char* dbName, char* dbUser, char* dbPswd)
{
	int rv = 0;
	int i = 0;
	int O = 0;
	struct sqlca sqlca;
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	NDBHandle* handle = NULL;
	NDBHandle  thandle = NULL;
/* EXEC SQL END DECLARE SECTION; */ 

	
	//初始化
	memset(&gDAEslDB_pool, 0, sizeof(gDAEslDB_pool));
	strcpy(gDAEslDB_db, dbName);
	strcpy(gDAEslDB_user, dbUser);
	strcpy(gDAEslDB_pswd, dbPswd);
	
	//如果连接池容量为0，则测试连接参数
	if(bounds == 0)
	{
		rv = IC_DBApi_Connect(&thandle);
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "Test Connect Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		rv = IC_DBApi_Disconnect(&thandle);
		
		return 0;			
	}
	
	//初始化互斥
	rv = pthread_mutex_init(&gDAEslDB_pool.one_big_mutex, NULL);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "pthread_mutex_init Error");
		return IC_DB_PTHREAD_MUTEX_INIT_ERR;
	}
	
	//初始化条件
	rv = pthread_cond_init(&gDAEslDB_pool.idle_cond, NULL);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "pthread_cond_init Error");
		
		pthread_mutex_destroy(&gDAEslDB_pool.one_big_mutex);
		return IC_DB_PTHREAD_COND_INIT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "pthread_cond_init OK");
	
	//设置使用线程
	/* EXEC SQL ENABLE THREADS; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )157;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "ENABLE THREADS Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "%.*s",sqlca.sqlerrm.sqlerrml,sqlca.sqlerrm.sqlerrmc);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			return IC_DB_CONNECTION_ERR;
		}
		
		pthread_mutex_destroy(&gDAEslDB_pool.one_big_mutex);
		pthread_cond_destroy(&gDAEslDB_pool.idle_cond);
		
		return IC_DB_SQLENABLETHREADS_ERR;
	}

	//为连接句柄分配内存
	gDAEslDB_pool.dbPool = (NDBHandle*)malloc(bounds*sizeof(NDBHandle));
	gDAEslDB_pool.status = (int*)malloc(bounds*sizeof(int));
	if(!(gDAEslDB_pool.dbPool) || !(gDAEslDB_pool.status))
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolInit Malloc pool.dbPool Error");
		
		pthread_mutex_destroy(&gDAEslDB_pool.one_big_mutex);
		pthread_cond_destroy(&gDAEslDB_pool.idle_cond);
		
		return IC_DB_MALLOC_ERR;
	}
	memset(gDAEslDB_pool.dbPool, 0, bounds*sizeof(NDBHandle));
	memset(gDAEslDB_pool.status, 0, bounds*sizeof(int));
	handle = gDAEslDB_pool.dbPool;


	gDAEslDB_pool.bounds = bounds;
	gDAEslDB_pool.valid = 0;
	gDAEslDB_pool.nvalid = bounds;
	
	//建立数据库连接
	for (i=0; i<bounds&&O<bounds*2; O++)
	{
		rv = IC_DBApi_Connect(&(gDAEslDB_pool.dbPool[i]));
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_Connect[%d] Error", i);
//			gDAEslDB_pool.status[i] = 0;
//			gDAEslDB_pool.nvalid++;
		}
		else
		{
			gDAEslDB_pool.status[i++] = 1;
			gDAEslDB_pool.valid++;
			gDAEslDB_pool.nvalid--;
		}		
	}
	
	//判断连接情况
	if(gDAEslDB_pool.nvalid == gDAEslDB_pool.bounds)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolInit handle Connect Error");
		
		//出错则释放分配的内存
		if(gDAEslDB_pool.dbPool)
		{
			free(gDAEslDB_pool.dbPool);
			gDAEslDB_pool.dbPool = NULL;
		}
		if(gDAEslDB_pool.status)
		{
			free(gDAEslDB_pool.status);
			gDAEslDB_pool.status = NULL;
		}
		
		pthread_mutex_destroy(&gDAEslDB_pool.one_big_mutex);
		pthread_cond_destroy(&gDAEslDB_pool.idle_cond);

		return IC_DB_CONNECT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_Connect Connect %d OK", gDAEslDB_pool.valid);
	
	return 0;
}


/********************************************************/
/*程 序 名：	IC_DBApi_ConnGet						*/
/*功能描述：	从连接池获取数据库连接					*/
/*参数说明：	handle		数据库连接句柄				*/
/*				sTimeout	超时时间(秒)				*/
/*				nsTimeout	超时时间(纳秒)				*/
/********************************************************/


//int IC_DBApi_ConnGet(ICDBHandle* handle, const struct timespec* absTime)
__attribute__ ((visibility("default")))  int IC_DBApi_ConnGet(ICDBHandle* handle, int sTimeout, int nsTimeout)
{
	int 				rv = 0;
	struct timeval 		now;
	struct timespec 	ts;
	struct timespec* 	absTime = NULL;

	//判断是否超时退出
	if(sTimeout!=0 || nsTimeout!=0)
	{	
		gettimeofday(&now, NULL);
		ts.tv_sec = now.tv_sec + sTimeout;
		ts.tv_nsec = now.tv_usec * 1000 + nsTimeout;
		absTime = &ts;
	}

	//获取互斥锁
	rv = pthread_mutex_lock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet pthread_mutex_lock Error");
		return IC_DB_PTHREAD_MUTEX_LOCK_ERR;
	}
	

	//判断连接池是否已经终止
	if(gDAEslDB_pool.terminated)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_POOLTERMINATED_ERR, "IC_DBApi_ConnGet Pool Terminated Error");
		
		rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet After Pool Terminated Error, pthread_mutex_unlock Error");
		}
		
		*handle = NULL;
		return IC_DB_POOLTERMINATED_ERR;
	}

	//判断是否有有效连接
	if(gDAEslDB_pool.valid <= 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnGet No Valid Connect, nvalid=%d, bounds=%d", 
														gDAEslDB_pool.nvalid, gDAEslDB_pool.bounds);
		
		//判断是否都是无效连接
		if(gDAEslDB_pool.nvalid == gDAEslDB_pool.bounds)
		{			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "All Connection Not Valid, Need ReConnect");
			
			//数据库连接池连接重新初始化
			rv = IC_DBApi_PoolConnReInit();
			if(!rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "All Connection Not Valid, IC_DBApi_PoolConnReInit OK");
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "valid(%d);nvalid(%d)", gDAEslDB_pool.valid, gDAEslDB_pool.nvalid);
				
				//获取连接句柄
				*handle = gDAEslDB_pool.dbPool[--(gDAEslDB_pool.valid)];
				
				//释放互斥锁	
				rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet After IC_DBApi_PoolConnReInit OK, pthread_mutex_unlock Error");
				}
			
				return 0;
			}
			else if(rv == IC_DB_CONNECTION_ERR)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "All Connection Not Valid, IC_DBApi_PoolConnReInit Connect Error");
				
				//释放互斥锁	
				rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet After IC_DBApi_PoolConnReInit Connect Error, pthread_mutex_unlock Error");
				}
				
				*handle = NULL;
				return IC_DB_CONNECTION_ERR;
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "All Connection Not Valid, IC_DBApi_PoolConnReInit Else Error");
				
				//释放互斥锁	
				rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet After IC_DBApi_PoolConnReInit Else Error, pthread_mutex_unlock Error");
				}
				
				*handle = NULL;
				return IC_DB_ALLCONN_NOTVALID_ERR;
			}
		}
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnGet No Valid Connect Because of Using Out");

		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnGet Wait Connect");
		
		if(!absTime)
		{
			pthread_cond_wait(&gDAEslDB_pool.idle_cond, &gDAEslDB_pool.one_big_mutex);
		}
		else
		{
			rv = pthread_cond_timedwait(&gDAEslDB_pool.idle_cond, &gDAEslDB_pool.one_big_mutex, absTime);
			if(rv == ETIMEDOUT)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet Wait Connect Timeout Error");
				
				rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet After Wait Connect Timeout Error, pthread_mutex_unlock Error");
				}
				
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnGet Error");
				*handle = NULL;
				return IC_DB_CONDTIMEOUT_ERR;
			}
			else if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet pthread_cond_timedwait Error");
				
				rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet After pthread_cond_timedwait Error, pthread_mutex_unlock Error");
				}
				
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnGet Error");
				*handle = NULL;
				return IC_DB_PTHREAD_COND_TIMEDWAIT_ERR;
			}				
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnGet pthread_cond_timedwait OK");
		}

		//获取条件后有效连接仍为0则释放互斥锁
		if(gDAEslDB_pool.valid == 0)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_GETCOND_VALIDISZERO_ERR, "IC_DBApi_ConnGet Get Connet But Valid is Zero Error");
			
			//释放互斥锁
			rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet After Get Connet But Valid is Zero Error, pthread_mutex_unlock Error");
			}

			//判断程序是否终止
			if(gDAEslDB_pool.terminated)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_POOLTERMINATED_ERR, "IC_DBApi_ConnGet Pool Terminated Error");
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnGet Error");
				*handle = NULL;
				return IC_DB_POOLTERMINATED_ERR; 
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnGet Error");
			*handle = NULL;
			return IC_DB_GETCOND_VALIDISZERO_ERR; 
		}
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnGet Have Valid(%d) Connect", gDAEslDB_pool.valid);
	
	//判断现有连接的状态
	if(gDAEslDB_pool.status[gDAEslDB_pool.valid-1] == 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Handle(%d) Status is 0", gDAEslDB_pool.valid-1);
		
		//首先断开坏掉的连接
		if(gDAEslDB_pool.dbPool[gDAEslDB_pool.valid-1])
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Handle(%d) Have Disconnected", gDAEslDB_pool.valid-1);
			
			rv = IC_DBApi_Disconnect(&(gDAEslDB_pool.dbPool[gDAEslDB_pool.valid-1]));
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "Handle(%d) Status is 0, DisConnect handle Error", gDAEslDB_pool.valid-1);
			}
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Handle(%d) Status is 0, DisConnect handle OK", gDAEslDB_pool.valid-1);
			
			gDAEslDB_pool.valid--;
			gDAEslDB_pool.nvalid++;
		}
		
		//重新连接
		rv = IC_DBApi_Connect(&(gDAEslDB_pool.dbPool[gDAEslDB_pool.valid]));
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "Handle(%d) Status is 0, Connect handle Error", gDAEslDB_pool.valid);
			*handle = NULL;
			
			//释放互斥锁
			rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "Handle Status is 0, Connect handle Error, IC_DBApi_ConnGet pthread_mutex_unlock Error");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnGet Error");
			return IC_DB_ALLCONN_NOTVALID_ERR;
		}
		else
		{
			gDAEslDB_pool.status[gDAEslDB_pool.valid] = 1;
			gDAEslDB_pool.valid++;
			gDAEslDB_pool.nvalid--;
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Handle(%d) Status is 0, Connect handle OK", gDAEslDB_pool.valid);
		}
	}

	//获取连接句柄
	*handle = gDAEslDB_pool.dbPool[--(gDAEslDB_pool.valid)];

	//释放互斥锁
	rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnGet pthread_mutex_unlock Error");
//		return IC_DB_PTHREAD_MUTEX_UNLOCK_ERR;
	}

	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_ConnFree                      */
/*功能描述：    释放数据库连接到连接池                  */
/*参数说明：    handle      数据库连接句柄              */
/*              validFlag   数据库连接有效性            */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_ConnFree(ICDBHandle handle, int validFlag)
{
	int rv = 0;
	int i = 0;
	
	//获取互斥锁
	rv = pthread_mutex_lock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree pthread_mutex_lock Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnFree Error");
		return IC_DB_PTHREAD_MUTEX_LOCK_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnFree pthread_mutex_lock OK");

	//判断程序是否终止
	if (gDAEslDB_pool.terminated)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_POOLTERMINATED_ERR, "IC_DBApi_ConnFree Pool Terminated Error");
		
		gDAEslDB_pool.dbPool[gDAEslDB_pool.valid] = handle;
		gDAEslDB_pool.valid++;
		
		rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree Pool After Terminated Error, pthread_mutex_unlock Error");
		}
	
		return IC_DB_POOLTERMINATED_ERR; 
	}
	
	//判断该连接是否已经被释放
	for(i=0; i<gDAEslDB_pool.valid; i++)
	{
		if(gDAEslDB_pool.dbPool[i] == handle)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[3], 0, "handle Have Freed Before");
			
			rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree After handle Have Freed Before, pthread_mutex_unlock Error");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnFree Error");
			return 0;
		}
	}

	//判断有效连接数是否已经到达最大值
	if(gDAEslDB_pool.valid == gDAEslDB_pool.bounds)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_VALIDBOUNDS_ERR, "IC_DBApi_ConnFree Valid Bigger Than Bounds Error");
		
		rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
		if(rv)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree After Valid Bigger Than Bounds Error, pthread_mutex_unlock Error");
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnFree Error");
		return IC_DB_VALIDBOUNDS_ERR;
	}
	
//	gDAEslDB_pool.dbPool[gDAEslDB_pool.valid] = handle;
//	gDAEslDB_pool.valid++;

//	pthread_cond_signal(&gDAEslDB_pool.idle_cond);

	//判断释放的连接是否有效
	if(validFlag == 1)
	{
		gDAEslDB_pool.dbPool[gDAEslDB_pool.valid] = handle;
		gDAEslDB_pool.valid++;

		pthread_cond_signal(&gDAEslDB_pool.idle_cond);
	}
	else
	{
		if(gDAEslDB_pool.nvalid == gDAEslDB_pool.bounds)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_NVALIDBOUNDS_ERR, "IC_DBApi_ConnFree NValid Bigger Than Bounds Error");
		
			rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree After NValid Bigger Than Bounds Error, pthread_mutex_unlock Error");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnFree Error");
			return IC_DB_NVALIDBOUNDS_ERR;
		}
		
		//首先断开坏掉的连接
		if(handle)
		{
			rv = IC_DBApi_Disconnect(&handle);
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree, DisConnect handle Error", gDAEslDB_pool.valid);
			}
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnFree, DisConnect handle OK", gDAEslDB_pool.valid);
			
			//重新连接
			rv = IC_DBApi_Connect(&handle);
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree, Connect handle Error", gDAEslDB_pool.valid);
				
				//将所有连接状态置为损坏
				for(i=0; i<gDAEslDB_pool.bounds; i++)
				{
					gDAEslDB_pool.status[i] = 0;
				}
				gDAEslDB_pool.nvalid++;
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ConnFree, Connect handle OK", gDAEslDB_pool.valid);
				
				gDAEslDB_pool.dbPool[gDAEslDB_pool.valid] = handle;
				gDAEslDB_pool.valid++;
		
				pthread_cond_signal(&gDAEslDB_pool.idle_cond);
			}
		}
	}

	//释放互斥锁
	rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ConnFree pthread_mutex_unlock Error");
//		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ConnFree Error");
//		return IC_DB_PTHREAD_MUTEX_UNLOCK_ERR;
	}

	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_PoolFree                      */
/*功能描述：    释放数据库连接池                        */
/*参数说明：                                            */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_PoolFree( )
{
	int rv = 0;
	int i = 0;
//	struct sqlca sqlca;
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	NDBHandle* handle = NULL;
/* EXEC SQL END DECLARE SECTION; */ 


	//获取互斥锁
	rv = pthread_mutex_lock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree pthread_mutex_lock Error");
		return IC_DB_PTHREAD_MUTEX_LOCK_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_PoolFree pthread_mutex_lock OK");
	
	//设置终止状态
	gDAEslDB_pool.terminated = 1;

	//释放互斥锁
	rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree pthread_mutex_unlock Error");
		return IC_DB_PTHREAD_MUTEX_UNLOCK_ERR;
	}
	

	//唤醒所有连接的阻塞状态
	rv = IC_DBApi_Pool_WakeAll();
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree IC_DBApi_Pool_WakeAll Error");
	}
	
	
	for(i=0; i<IC_DB_RETRYNUM; i++)
	{
		if(gDAEslDB_pool.valid+gDAEslDB_pool.nvalid >= gDAEslDB_pool.bounds)
		{
			IC_DBApi_Pool_WakeAll();
			break;
		}
		sleep(1);
	}

	//获取互斥锁
	rv = pthread_mutex_lock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree pthread_mutex_lock2 Error");
	}
	else
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_PoolFree pthread_mutex_lock2 OK");
	}
	
	handle = gDAEslDB_pool.dbPool;
	if(handle)
	{
		//释放已连接的数据库
		for(i=0; i<gDAEslDB_pool.bounds; i++)
		{
			if(handle[i])
			{
				rv = IC_DBApi_Disconnect(&(handle[i]));
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree Handle(%d) DisConnect Error", i);
				}		
			}
		}
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_PoolFree All Free OK");
	}

	//释放分配的内存
	if(gDAEslDB_pool.dbPool)
	{
		free(gDAEslDB_pool.dbPool);
		gDAEslDB_pool.dbPool = NULL;
	}
	if(gDAEslDB_pool.status)
	{
		free(gDAEslDB_pool.status);
		gDAEslDB_pool.status = NULL;
	}

	//释放互斥锁
	rv = pthread_mutex_unlock(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree pthread_mutex_unlock2 Error");

	}

	//销毁互斥
	rv = pthread_mutex_destroy(&gDAEslDB_pool.one_big_mutex);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree pthread_mutex_destroy Error");
	}
	
	//销毁条件
	rv = pthread_cond_destroy(&gDAEslDB_pool.idle_cond);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_PoolFree pthread_cond_destroy Error");
	}

	
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_ExecNSelSql                   */
/*功能描述：    执行单个非select数据库语句(不包含事务)  */
/*参数说明：    handle      数据库连接句柄              */
/*              sql         数据库语句                  */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_ExecNSelSql(ICDBHandle handle, char* sql)
{
	int rv = 0;
	struct sqlca sqlca;
	NDBHandle myhandle;
	char*	tmpsql = NULL;

/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char* nsql = NULL;
/* EXEC SQL END DECLARE SECTION; */ 

	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_ExecNSelSql OK");
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Sql is [%s]", sql);
		
	myhandle = (NDBHandle)handle;
	
	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 

	
	tmpsql = Sql_Check(sql);
	nsql = tmpsql;

	//执行语句   	
	/* EXEC SQL EXECUTE IMMEDIATE :nsql; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )172;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)nsql;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode!=0 && sqlca.sqlcode!=-100 && sqlca.sqlcode!=100 &&  sqlca.sqlcode!=-1403 &&  sqlca.sqlcode!=1403)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecNSelSql EXECUTE IMMEDIATE Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "Sql is [%s]", sql); //wangbaoming 
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSql Error");
			if(tmpsql)free(tmpsql);
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSql Error");
		if(tmpsql)free(tmpsql);
		return IC_DB_SQLEXECIMMEDIAT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_PoolFree EXECUTE IMMEDIATE OK");
	
	if(tmpsql)free(tmpsql);
	
	//判断是否没有记录受影响 
	if(sqlca.sqlcode==-100 || sqlca.sqlcode==100 || sqlca.sqlcode==-1403 || sqlca.sqlcode==1403)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSql Error");
		return IC_DB_NODATA_AFFECT;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSql OK");
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_ExecNSelSqls                  */
/*功能描述：    执行多个非select数据库语句              */
/*参数说明：    handle      数据库连接句柄              */
/*              sqls        数据库语句(以NULL结束)      */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_ExecNSelSqls(ICDBHandle handle, char* sqls[])
{
	int i = 0;
	int rv = 0;
	int lrv = 0;
	struct sqlca sqlca;
	NDBHandle myhandle;
	char*	tmpsql = NULL;
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char* sql = NULL;
/* EXEC SQL END DECLARE SECTION; */ 

	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_ExecNSelSqls OK");
	
	myhandle = (NDBHandle)handle;

	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 


	//循环执行ＳＱＬ语句
	for(i=0; sqls[i]!=NULL; i++)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Begin Exec SQL(%d)", i);
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Sql[%d] is [%s]", i, sqls[i]);
		
		tmpsql = Sql_Check(sqls[i]);
		sql = tmpsql;//sqls[i];

		//执行语句   
		/* EXEC SQL EXECUTE IMMEDIATE :sql; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.stmt = "";
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )191;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)sql;
  sqlstm.sqhstl[0] = (unsigned long )0;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


		if(sqlca.sqlcode!=0 && sqlca.sqlcode!=-100 && sqlca.sqlcode!=100 &&  sqlca.sqlcode!=-1403 &&  sqlca.sqlcode!=1403)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecNSelSqls EXECUTE IMMEDIATE(%d) Error", i);
			
			//事务回退 
			/* EXEC SQL ROLLBACK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )210;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


			if(sqlca.sqlcode!=0)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecNSelSqls After EXECUTE IMMEDIATE(%d) Error, RollBack Error", i);
			}
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecNSelSqls After EXECUTE IMMEDIATE(%d) Error, RollBack OK", i);
			
			if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
			{
				rv = IC_DBApi_InvalidConnect();
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
				}
				else
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
				}
			
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSqls Error");
				if(tmpsql)free(tmpsql);
				return IC_DB_CONNECTION_ERR;
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSqls Error");
			if(tmpsql)free(tmpsql);
			return IC_DB_SQLEXECIMMEDIAT_ERR;
		}
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecNSelSqls EXECUTE IMMEDIATE(%d) OK", i);
		
		if(tmpsql)free(tmpsql);
		
		//判断是否没有记录受影响
		if(sqlca.sqlcode==-100 || sqlca.sqlcode==100 || sqlca.sqlcode==-1403 || sqlca.sqlcode==1403)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_NODATA_AFFECT, "IC_DBApi_ExecNSelSqls EXECUTE IMMEDIATE(%d) NO Affect", i);
			lrv = IC_DB_NODATA_AFFECT;
		}
	}

	//事务提交 
	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )225;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode!=0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecNSelSqls Commit Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSqls Error");
		return IC_DB_COMMIT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecNSelSqls Commit OK");

	if(lrv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSqls Error");
	}
	else
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecNSelSqls OK");
	}
	return lrv;
}


/********************************************************/
/*程 序 名：    IC_DBApi_BeginTran                     */
/*功能描述：    数据库事务开始                          */
/*参数说明：    handle      数据库连接句柄              */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_BeginTran(ICDBHandle handle)
{
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_Rollback                      */
/*功能描述：    数据库事务回退                          */
/*参数说明：    handle      数据库连接句柄              */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_Rollback(ICDBHandle handle)
{
//	int rv = 0;
	struct sqlca sqlca;
	NDBHandle myhandle;
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_Rollback OK");
	
	myhandle = (NDBHandle)handle;

	//绑定连接句柄
	/* EXEC SQL CONTEXT USE :myhandle; */ 


	//事务回退 
	/* EXEC SQL ROLLBACK; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )240;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if( sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_Rollback RollBack Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Rollback Error");
		return IC_DB_ROLLBACK_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_Rollback RollBack OK");

	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Rollback OK");
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_Commit                        */
/*功能描述：    数据库事务提交                          */
/*参数说明：    handle      数据库连接句柄              */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_Commit(ICDBHandle handle)
{
//	int rv = 0;
	struct sqlca sqlca;
	NDBHandle myhandle;
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_Commit OK");
	
	myhandle = (NDBHandle)handle;

	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 


	//事务回退 
	/* EXEC SQL COMMIT; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )255;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if( sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_Commit Commit Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Commit Error");
		return IC_DB_COMMIT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_Commit Commit OK");

	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Commit OK");
	return 0;
}


/********************************************************/
/*程 序 名：	IC_DBApi_ExecSelSql					*/
/*功能描述：	执行select数据库语句(返回单条记录)		*/
/*参数说明：	handle		数据库连接句柄				*/
/*				sql			数据库语句					*/
/*				row			返回的记录					*/
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_ExecSelSql(ICDBHandle handle, char* sql, ICDBRow* row)
{
	int     i = 0;
	int     rv = 0;
	int     numCols = 0;
	short   linds[256];
	struct  sqlca sqlca;
	SQLDA*  pSqlda = NULL;
	NDBHandle myhandle;	
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char* mysql = NULL;	
/* EXEC SQL END DECLARE SECTION; */ 

	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_ExecSelSql OK");
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Sql is [%s]", sql);
	
	//初始化
	memset(linds, 0, 256*sizeof(short));
	mysql = sql;
	myhandle = (NDBHandle)handle;

	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 


	//准备查询语句   
	/* EXEC SQL PREPARE stmt2 FROM :mysql; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )270;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)mysql;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql PREPARE stmt2 Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_PREPARESTMT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql PREPARE stmt2 OK");

	//sqlda初始化
	rv = IC_DBApi_SqldaInit(myhandle, &pSqlda, row->fieldCount);
	if(rv != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ExecSelSql IC_DBApi_SqldaInit Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_SQLDAINIT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql IC_DBApi_SqldaInit OK");

	pSqlda->N = row->fieldCount;
	
	//填充SQLDA
	/* EXEC SQL DESCRIBE SELECT LIST FOR stmt2 INTO pSqlda; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )289;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)pSqlda;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if (sqlca.sqlcode < 0 )
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql DESCRIBE SELECT LIST FOR stmt2 Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_DESCRIBESELECT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql DESCRIBE SELECT LIST FOR stmt2 OK");
	
	//判断获取的字段数目是否与输入的字段数目一致
	numCols = (int)pSqlda->F;	
	if(numCols != row->fieldCount)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_FIELDCOUNT_ERR, "IC_DBApi_ExecSelSql Field Count Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_FIELDCOUNT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql Field Count OK");

	//判断字段存储空间是否为空
	for(i=0; i<numCols; i++)
	{
		if(row->field[i].cont == NULL)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ExecSelSql Field(%d) is NULL Error", i);

			IC_DBApi_SqldaFree(myhandle, &pSqlda);
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_FIELDNULL_ERR;
		}
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql Field All is Not NULL OK");

	//为字段设置存贮空间
	rv = IC_DBApi_SetRowDataMemory(myhandle, pSqlda, linds, row);
	if(rv != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ExecSelSql IC_DBApi_SetRowDataMemory Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_SETROWDATAMEMORY_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql IC_DBApi_SetRowDataMemory OK");

	//定义游标    
	/* EXEC SQL DECLARE c4 CURSOR FOR stmt2; */ 

	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql DECLARE c4 CURSOR Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_DECLARECURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql DECLARE c4 CURSOR OK");

	//打开游标   
	/* EXEC SQL OPEN c4; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )308;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql OPEN c4 CURSOR Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_OPENCURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql OPEN c4 CURSOR OK");
	
	/* EXEC SQL WHENEVER NOT FOUND GOTO not_found; */ 

	
	//获取数据   
	/* EXEC SQL FETCH c4 USING DESCRIPTOR pSqlda; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )323;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqfoff = (         int )0;
 sqlstm.sqfmod = (unsigned int )2;
 sqlstm.sqhstv[0] = (unsigned char  *)pSqlda;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode == 1403) goto not_found;
}


	if(sqlca.sqlcode < 0 && sqlca.sqlcode != -1405)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql FETCH c4 USING DESCRIPTOR Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		/* EXEC SQL CLOSE c4; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )342;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


		if(sqlca.sqlcode < 0)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql After FETCH c4 USING DESCRIPTOR Error, Close Cursor Error");
		}
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql After FETCH c4 USING DESCRIPTOR Error, Close Cursor OK");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_FETCH_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql FETCH c4 USING DESCRIPTOR OK");

	//释放sqlda内存
	IC_DBApi_SqldaFree(myhandle, &pSqlda);
	
	//关闭游标    
	/* EXEC SQL CLOSE c4; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )357;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql CLOSE c4 CURSOR Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_CLOSECURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql CLOSE c4 CURSOR OK");
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql OK");
	return 0;

not_found:	//没有返回结果

	//释放sqlda内存
	IC_DBApi_SqldaFree(myhandle, &pSqlda);
	
	//关闭游标	
	/* EXEC SQL CLOSE c4; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )372;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql After No Data Found, CLOSE c4 CURSOR Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
		return IC_DB_CLOSECURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql After No Data Found, CLOSE c4 CURSOR OK");
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSql Error");
	return IC_DB_NODATA_AFFECT;
}


/********************************************************/
/*程 序 名：    IC_DBApi_ExecSelSqlMR                  */
/*功能描述：    执行select数据库语句(返回多条记录)      */
/*参数说明：    handle      数据库连接句柄              */
/*              sql         数据库语句                  */
/*              beginNo     返回记录的开始条数          */
/*              count       返回记录的条数              */
/*				rows		返回的记录					*/
/*              allRecNum   符合条件的记录总数          */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_ExecSelSqlMR(ICDBHandle handle, char* sql, int beginNo, int count, ICDBRow* rows, int* allRecNum)
{
	int     	i = 0;
	int     	O = 0;
	int     	rv = 0;
	int     	numCols = 0;
	short   	linds[256];
	struct  	sqlca sqlca;
	SQLDA*  	pSqlda = NULL;
	NDBHandle 	myhandle;	
	char*   	tmpstr = NULL;
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char*   excusql = NULL;
	char    getcountsql[512];
	short   recordNum = 0;
/* EXEC SQL END DECLARE SECTION; */ 

	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_ExecSelSqlMR OK");
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Sql is [%s]", sql);
	
	//初始化
	memset(linds, 0, 256*sizeof(short));
	memset(getcountsql, 0, 512);
	excusql = sql;
	myhandle = (NDBHandle)handle;

	//判断输入条件
	if(beginNo<=0 || count<1 || !allRecNum)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR Input Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_INPUT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR Input OK");

	//格式化获取符合条件记录总数的查询条件
	tmpstr = strstr(sql, "from");
	sprintf(getcountsql, "select count(*) %s", tmpstr);

	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 


	//获取符合条件的记录总数
	/* EXEC SQL PREPARE stmt1 FROM :getcountsql; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )387;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)getcountsql;
 sqlstm.sqhstl[0] = (unsigned long )512;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	/* EXEC SQL DECLARE c3 CURSOR FOR stmt1; */ 

	/* EXEC SQL OPEN c3 ; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )406;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	/* EXEC SQL FETCH c3 INTO :recordNum; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )421;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqfoff = (         int )0;
 sqlstm.sqfmod = (unsigned int )2;
 sqlstm.sqhstv[0] = (unsigned char  *)&recordNum;
 sqlstm.sqhstl[0] = (unsigned long )sizeof(short);
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode == 1403) goto not_found;
}


	/* EXEC SQL CLOSE c3; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )440;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR Get Row Count Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_GETROWCOUNT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR Get Row Count OK");

	//判断查询结果是否为空
	*allRecNum = recordNum;
	if(recordNum == 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_NODATA_AFFECT, "IC_DBApi_ExecSelSqlMR Row Count is Zero Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_NODATA_AFFECT;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR Row Count is Not Zero");

	//准备查询语句    
	/* EXEC SQL PREPARE stmt5 FROM :excusql; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )455;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)excusql;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR PREPARE stmt5 Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_PREPARESTMT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR PREPARE stmt5 OK");

	//sqlda初始化
	rv = IC_DBApi_SqldaInit(myhandle, &pSqlda, rows[0].fieldCount);
	if(rv != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ExecSelSqlMR IC_DBApi_SqldaInit Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_SQLDAINIT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR IC_DBApi_SqldaInit OK");
	
	pSqlda->N = rows[0].fieldCount;
	
	//填充SQLDA
	/* EXEC SQL DESCRIBE SELECT LIST FOR stmt5 INTO pSqlda; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )474;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)pSqlda;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}

		
	if (sqlca.sqlcode != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR DESCRIBE SELECT LIST FOR stmt5 Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_DESCRIBESELECT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR DESCRIBE SELECT LIST FOR stmt5 OK");

	//判断获取的字段数目是否与输入的字段数目一致
	numCols = (int)pSqlda->F;	
	if(numCols != rows[0].fieldCount)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ExecSelSqlMR Field Count Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_FIELDCOUNT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR Field Count OK");

	//判断字段存储空间是否为空
	for(O=0; O<count; O++)
	{
		for(i=0; i<numCols; i++)
		{
			if(rows[O].field[i].cont == NULL)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ExecSelSqlMR Field(%d)(%d) is NULL Error", O, i);

				IC_DBApi_SqldaFree(myhandle, &pSqlda);
				
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
				return IC_DB_FIELDNULL_ERR;
			}
		}
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR Field All is Not NULL");

	//定义游标    
#ifdef NO_SCROLL_CURSOR
	/* EXEC SQL DECLARE c7 CURSOR FOR stmt5; */ 

#else
	EXEC SQL DECLARE c7 SCROLL CURSOR FOR stmt5;
#endif
	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR DECLARE c7 CURSOR Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_DECLARECURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR DECLARE c7 CURSOR OK");

	//打开游标      
	/* EXEC SQL OPEN c7; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )493;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR OPEN c7 CURSOR Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_OPENCURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR OPEN c7 CURSOR OK");

#ifdef NO_SCROLL_CURSOR
	i = 0;
#else
	i = beginNo-1;
#endif
	O = 0;

	//循环获取数据
	do
	{		
		//为字段设置存贮空间
		rv = IC_DBApi_SetRowDataMemory(myhandle, pSqlda, linds, &rows[O]);
		if(rv != 0)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_ExecSelSqlMR IC_DBApi_SetRowDataMemory(%d) Error", O);
		
			IC_DBApi_SqldaFree(myhandle, &pSqlda);
			/* EXEC SQL CLOSE c7; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )508;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


			if(sqlca.sqlcode < 0)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSql After IC_DBApi_SetRowDataMemory(%d) Error, Close Cursor Error", O);
			}
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSql After IC_DBApi_SetRowDataMemory(%d) Error, Close Cursor OK", O);
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_SETROWDATAMEMORY_ERR;
		}
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR IC_DBApi_SetRowDataMemory(%d) OK", O);
 
		//获取数据
#ifdef NO_SCROLL_CURSOR
		/* EXEC SQL FETCH c7 USING DESCRIPTOR pSqlda; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )523;
  sqlstm.selerr = (unsigned short)1;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqfoff = (         int )0;
  sqlstm.sqfmod = (unsigned int )2;
  sqlstm.sqhstv[0] = (unsigned char  *)pSqlda;
  sqlstm.sqhstl[0] = (unsigned long )0;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
  if (sqlca.sqlcode == 1403) goto not_found;
}


#else
		if(i == beginNo-1)
		{
			EXEC SQL FETCH ABSOLUTE :beginNo c7 USING DESCRIPTOR pSqlda;
		}
		else
		{
			EXEC SQL FETCH NEXT c7 USING DESCRIPTOR pSqlda;
		}
#endif
		if(sqlca.sqlcode < 0 && sqlca.sqlcode != -1405)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR FETCH c4 USING DESCRIPTOR Error");
		
			IC_DBApi_SqldaFree(myhandle, &pSqlda);
			/* EXEC SQL CLOSE c7; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )542;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


			if(sqlca.sqlcode < 0)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR After FETCH c7 USING DESCRIPTOR Error, Close Cursor Error");
			}
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR After FETCH c7 USING DESCRIPTOR Error, Close Cursor OK");
			
			if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
			{
				rv = IC_DBApi_InvalidConnect();
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
				}
				else
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
				}
			
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
				return IC_DB_CONNECTION_ERR;
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_FETCH_ERR;
		}
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR FETCH c7 USING DESCRIPTOR OK");
		
		//重新填充SQLDA
		/* EXEC SQL DESCRIBE SELECT LIST FOR stmt5 INTO pSqlda; */ 

{
  struct sqlexd sqlstm;
  sqlstm.sqlvsn = 12;
  sqlstm.arrsiz = 4;
  sqlstm.sqladtp = &sqladt;
  sqlstm.sqltdsp = &sqltds;
  sqlstm.iters = (unsigned int  )1;
  sqlstm.offset = (unsigned int  )557;
  sqlstm.cud = sqlcud0;
  sqlstm.sqlest = (unsigned char  *)&sqlca;
  sqlstm.sqlety = (unsigned short)4352;
  sqlstm.occurs = (unsigned int  )0;
  sqlstm.sqhstv[0] = (unsigned char  *)pSqlda;
  sqlstm.sqhstl[0] = (unsigned long )0;
  sqlstm.sqhsts[0] = (         int  )0;
  sqlstm.sqindv[0] = (         short *)0;
  sqlstm.sqinds[0] = (         int  )0;
  sqlstm.sqharm[0] = (unsigned long )0;
  sqlstm.sqadto[0] = (unsigned short )0;
  sqlstm.sqtdso[0] = (unsigned short )0;
  sqlstm.sqphsv = sqlstm.sqhstv;
  sqlstm.sqphsl = sqlstm.sqhstl;
  sqlstm.sqphss = sqlstm.sqhsts;
  sqlstm.sqpind = sqlstm.sqindv;
  sqlstm.sqpins = sqlstm.sqinds;
  sqlstm.sqparm = sqlstm.sqharm;
  sqlstm.sqparc = sqlstm.sqharc;
  sqlstm.sqpadto = sqlstm.sqadto;
  sqlstm.sqptdso = sqlstm.sqtdso;
  sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


		if(sqlca.sqlcode < 0)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR DESCRIBE SELECT LIST FOR stmt5 Error");
		
			IC_DBApi_SqldaFree(myhandle, &pSqlda);
			/* EXEC SQL CLOSE c7; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 12;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )576;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


			if(sqlca.sqlcode < 0)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR After DESCRIBE SELECT LIST FOR stmt5 Error, Close Cursor Error");
			}
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR After DESCRIBE SELECT LIST FOR stmt5 Error, Close Cursor OK");
			
			if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
			{
				rv = IC_DBApi_InvalidConnect();
				if(rv)
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
				}
				else
				{
					IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
				}
			
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
				return IC_DB_CONNECTION_ERR;
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_DESCRIBESELECT_ERR;
		}
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR DESCRIBE SELECT LIST FOR stmt5 OK");
		
		i++;

#ifdef NO_SCROLL_CURSOR		
		//判断该条记录应该返回
		if(i<beginNo)
		{
			continue;
		}
#endif
		
		O++;
	}
	while((i<beginNo+count-1));//&&(sqlca.sqlcode==0 || sqlca.sqlcode == -1405));

/*	//判断是否查询出错
	if(sqlca.sqlcode < 0 && sqlca.sqlcode != -1405)
	{
		printf("Last err!sqlcode=%d\n", sqlca.sqlcode);
        EXEC SQL CLOSE c7;
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		return -1;
	}*/

not_found:	

	//释放sqlda内存
	IC_DBApi_SqldaFree(myhandle, &pSqlda);
	
	//关闭游标                
	/* EXEC SQL CLOSE c7; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )591;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_ExecSelSqlMR CLOSE c7 CURSOR Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR Error");
		return IC_DB_CLOSECURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_ExecSelSqlMR CLOSE c7 CURSOR OK");

	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_ExecSelSqlMR OK");
	return 0;	
}


/********************************************************/
/*程 序 名：    IC_DBApi_OpenCursor                    */
/*功能描述：    打开游标								*/
/*参数说明：    handle      数据库连接句柄              */
/*              sql         数据库语句                  */
/*              fieldCount  字段个数	                */
/*              pCursor     游标指针			        */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_OpenCursor(ICDBHandle handle, char* sql, int fieldCount, ICDBCursor* pCursor)
{
	int     rv = 0;
	int     numCols = 0;
	struct  sqlca sqlca;
	SQLDA*  pSqlda = NULL;
	NDBHandle myhandle;	
	
/* EXEC SQL BEGIN DECLARE SECTION; */ 

	char* ocsql = NULL;	
/* EXEC SQL END DECLARE SECTION; */ 


	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_OpenCursor OK");
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Sql is [%s]", sql);
	
	//初始化
	ocsql = sql;
	myhandle = (NDBHandle)handle;

	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 


	//准备查询语句   
	/* EXEC SQL PREPARE stmt8 FROM :ocsql; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )606;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)ocsql;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_OpenCursor PREPARE stmt8 Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
		return IC_DB_PREPARESTMT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_OpenCursor PREPARE stmt8 OK");

	//sqlda初始化
	rv = IC_DBApi_SqldaInit(myhandle, &pSqlda, fieldCount);
	if(rv != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_OpenCursor IC_DBApi_SqldaInit Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
		return IC_DB_SQLDAINIT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_OpenCursor IC_DBApi_SqldaInit OK");
	
	pSqlda->N = fieldCount;

	//填充SQLDA
	/* EXEC SQL DESCRIBE SELECT LIST FOR stmt8 INTO pSqlda; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )625;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)pSqlda;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if (sqlca.sqlcode < 0 )
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_OpenCursor DESCRIBE SELECT LIST FOR stmt8 Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
		return IC_DB_DESCRIBESELECT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_OpenCursor DESCRIBE SELECT LIST FOR stmt8 OK");

	//判断获取的字段数目是否与输入的字段数目一致
	numCols = (int)pSqlda->F;
	pSqlda->N = pSqlda->F;	
	if(numCols != fieldCount)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_OpenCursor Field Count Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
		return IC_DB_FIELDCOUNT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_OpenCursor Field Count OK");

	//定义游标    
	/* EXEC SQL DECLARE c10 CURSOR FOR stmt8; */ 

	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_OpenCursor DECLARE c10 CURSOR Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
		return IC_DB_DECLARECURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_OpenCursor DECLARE c10 CURSOR OK");

	//打开游标   
	/* EXEC SQL OPEN c10; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.stmt = "";
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )644;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqcmod = (unsigned int )0;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_OpenCursor OPEN c10 CURSOR Error");
		
		IC_DBApi_SqldaFree(myhandle, &pSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor Error");
		return IC_DB_OPENCURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_OpenCursor OPEN c10 CURSOR OK");
	
	*pCursor = pSqlda;

	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_OpenCursor OK");
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_FetchByCursor                 */
/*功能描述：    通过游标获取数据						*/
/*参数说明：    handle      数据库连接句柄              */
/*              cursor      游标				       	*/
/*				row			返回的记录					*/
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_FetchByCursor(ICDBHandle handle, ICDBCursor cursor, ICDBRow* row)
{
	int     	i = 0;
	int     	rv = 0;
	int     	numCols = 0;
	short   	linds[256];
	struct  	sqlca sqlca;
	NDBHandle 	myhandle;
	SQLDA*		mypSqlda = NULL;
//	char	    test[100];	
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_FetchByCursor OK");
	
	//初始化
	memset(linds, 0, 256*sizeof(short));
	myhandle = (NDBHandle)handle;
	mypSqlda = (SQLDA*)cursor;

	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 


	//判断获取的字段数目是否与输入的字段数目一致
	numCols = (int)mypSqlda->F;	
	if(numCols != row->fieldCount)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_FetchByCursor Field Count Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
		return IC_DB_FIELDCOUNT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_FetchByCursor Field Count OK");

	//判断字段存储空间是否为空
	for(i=0; i<numCols; i++)
	{
		if(row->field[i].cont == NULL)
		{
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_FetchByCursor Field(%d) is NULL Error", i);
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
			return IC_DB_FIELDNULL_ERR;
		}
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_FetchByCursor Field All is Not NULL OK");
	
	//填充SQLDA
	/* EXEC SQL DESCRIBE SELECT LIST FOR stmt8 INTO mypSqlda; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )659;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqhstv[0] = (unsigned char  *)mypSqlda;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}

			
	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_FetchByCursor DESCRIBE SELECT LIST FOR stmt8 Error");
		
		IC_DBApi_SqldaFree(myhandle, &mypSqlda);
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
		return IC_DB_DESCRIBESELECT_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_FetchByCursor DESCRIBE SELECT LIST FOR stmt8 OK");

	//为字段设置存贮空间
	rv = IC_DBApi_SetRowDataMemory(myhandle, mypSqlda, linds, row);
	if(rv != 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_FetchByCursor IC_DBApi_SetRowDataMemory Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
		return IC_DB_SETROWDATAMEMORY_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_FetchByCursor IC_DBApi_SetRowDataMemory OK");
	
	/* EXEC SQL WHENEVER NOT FOUND GOTO not_found; */ 

	
	//获取数据
	/* EXEC SQL FETCH c10 USING DESCRIPTOR mypSqlda; */ 

{
 struct sqlexd sqlstm;
 sqlstm.sqlvsn = 12;
 sqlstm.arrsiz = 4;
 sqlstm.sqladtp = &sqladt;
 sqlstm.sqltdsp = &sqltds;
 sqlstm.iters = (unsigned int  )1;
 sqlstm.offset = (unsigned int  )678;
 sqlstm.selerr = (unsigned short)1;
 sqlstm.cud = sqlcud0;
 sqlstm.sqlest = (unsigned char  *)&sqlca;
 sqlstm.sqlety = (unsigned short)4352;
 sqlstm.occurs = (unsigned int  )0;
 sqlstm.sqfoff = (         int )0;
 sqlstm.sqfmod = (unsigned int )2;
 sqlstm.sqhstv[0] = (unsigned char  *)mypSqlda;
 sqlstm.sqhstl[0] = (unsigned long )0;
 sqlstm.sqhsts[0] = (         int  )0;
 sqlstm.sqindv[0] = (         short *)0;
 sqlstm.sqinds[0] = (         int  )0;
 sqlstm.sqharm[0] = (unsigned long )0;
 sqlstm.sqadto[0] = (unsigned short )0;
 sqlstm.sqtdso[0] = (unsigned short )0;
 sqlstm.sqphsv = sqlstm.sqhstv;
 sqlstm.sqphsl = sqlstm.sqhstl;
 sqlstm.sqphss = sqlstm.sqhsts;
 sqlstm.sqpind = sqlstm.sqindv;
 sqlstm.sqpins = sqlstm.sqinds;
 sqlstm.sqparm = sqlstm.sqharm;
 sqlstm.sqparc = sqlstm.sqharc;
 sqlstm.sqpadto = sqlstm.sqadto;
 sqlstm.sqptdso = sqlstm.sqtdso;
 sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
 if (sqlca.sqlcode == 1403) goto not_found;
}


	if(sqlca.sqlcode < 0 && sqlca.sqlcode != -1405)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_FetchByCursor FETCH c10 USING DESCRIPTOR Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
		return IC_DB_FETCH_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_FetchByCursor FETCH c104 USING DESCRIPTOR OK");

	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor OK");
	return 0;
	
not_found:
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_FetchByCursor Error");
	return IC_DB_NODATA_AFFECT;
}


/********************************************************/
/*程 序 名：    IC_DBApi_CloseCursor                   */
/*功能描述：    关闭游标								*/
/*参数说明：    handle      数据库连接句柄              */
/*              pCursor     游标指针			        */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_CloseCursor(ICDBHandle handle, ICDBCursor* pCursor)
{
	int     	rv = 0;
	struct  	sqlca sqlca;
	NDBHandle 	myhandle;
	SQLDA**		mypSqlda = NULL;
	
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Enter IC_DBApi_CloseCursor OK");
	
	myhandle = (NDBHandle)handle;
	mypSqlda = (SQLDA**)pCursor;

	//绑定连接句柄
	/* EXEC SQL CONTEXT  USE :myhandle; */ 

 
	//释放sqlda内存
    IC_DBApi_SqldaFree(myhandle, mypSqlda);	
		
	//关闭游标
    /* EXEC SQL CLOSE c10; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )697;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt(&myhandle, &sqlctx, &sqlstm, &sqlfpn);
}


	if(sqlca.sqlcode < 0)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], sqlca.sqlcode, "IC_DBApi_CloseCursor CLOSE c10 CURSOR Error");
		
		if(sqlca.sqlcode==IC_DB_CONNECTION_ERR || sqlca.sqlcode==IC_DB_CONNECTION2_ERR)
		{
			rv = IC_DBApi_InvalidConnect();
			if(rv)
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_InvalidConnect Error");
			}
			else
			{
				IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_InvalidConnect OK");
			}
			
			IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_CloseCursor Error");
			return IC_DB_CONNECTION_ERR;
		}
		
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_CloseCursor Error");
		return IC_DB_CLOSECURSOR_ERR;
	}
	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "IC_DBApi_CloseCursor CLOSE c10 CURSOR OK");

	IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_CloseCursor OK");
	return 0;
}


static char base64_table[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";


static int base64_encode(unsigned char * bin_data, unsigned int bin_size, 
                           char * base64_data)
{
    unsigned int i,j,k,blk_size,remain_size;
    unsigned char *p, left[3];


    blk_size = bin_size / 3;
    remain_size = bin_size % 3;

    p = bin_data;
    j = 0;

    for(i=0;i<blk_size;i++)
	{
        k = (p[0] & 0xFC) >> 2;
        base64_data[j++] = base64_table[k];
        k = ((p[0] & 0x03) << 4) | (p[1] >> 4);
        base64_data[j++] = base64_table[k];
        k = ((p[1] & 0x0F) << 2) | (p[2] >> 6);
        base64_data[j++] = base64_table[k];
        k = p[2] & 0x3F;
        base64_data[j++] = base64_table[k];
        p += 3;
    }

    switch(remain_size){
        case 0:
            break;

        case 1:
            left[0] = p[0];
            left[1] = 0;
            p = left;

            k = (p[0] & 0xFC) >> 2;
            base64_data[j++] = base64_table[k];
            k = ((p[0] & 0x03) << 4) | (p[1] >> 4);
            base64_data[j++] = base64_table[k];

            base64_data[j++] = '=';
            base64_data[j++] = '=';
            break;

        case 2:
            left[0] = p[0];
            left[1] = p[1];
            left[2] = 0;
            p = left;

            k = (p[0] & 0xFC) >> 2;
            base64_data[j++] = base64_table[k];
            k = ((p[0] & 0x03) << 4) | (p[1] >> 4);
            base64_data[j++] = base64_table[k];
            k = ((p[1] & 0x0F) << 2) | (p[2] >> 6);
            base64_data[j++] = base64_table[k];
            base64_data[j++] = '=';
            break;

        default:
            break;
    }

    base64_data[j] = 0;
    return 0;
}


static int base64_decode(char * base64_data,
                     unsigned char * bin_data, unsigned int * bin_size)
{
    unsigned int i,j,k,m,n,l;
    unsigned char four_bin[4];
    char four_char[4],c;

    j = strlen(base64_data);
    i = 0;
    l = 0;
    
    for(;;){
        if((i+4) > j){
            break;
        }
         
        for(k=0;k<4;k++){
            if(i == j){
                break;
            }

            c = base64_data[i++];
            if((c == '+') || (c == '/') || (c == '=') ||
                             ((c >= '0') && (c <= '9')) ||
                             ((c >= 'A') && (c <= 'Z')) ||
                             ((c >= 'a') && (c <= 'z'))){
               four_char[k] = c;
            }
        }

        if(k != 4){
              return -1;
        }

        n = 0;
        for(k=0;k<4;k++){
            if(four_char[k] != '='){
                for(m=0;m<64;m++){
                    if(base64_table[m] == four_char[k]){
                        four_bin[k] = (unsigned char)m;
                    }
                }
            }
            else{
                n++;
            }
        }

        switch(n){
            case 0:
                bin_data[l++] = (four_bin[0] << 2) | (four_bin[1] >> 4);
                bin_data[l++] = (four_bin[1] << 4) | (four_bin[2] >> 2);
                bin_data[l++] = (four_bin[2] << 6) | four_bin[3]; 
                break;

            case 1:
                bin_data[l++] = (four_bin[0] << 2) | (four_bin[1] >> 4);
                bin_data[l++] = (four_bin[1] << 4) | (four_bin[2] >> 2);
                break;

            case 2:
                bin_data[l++] = (four_bin[0] << 2) | (four_bin[1] >> 4);
                break;

            default:
                break;
        }

        if(n != 0){
            break;
        }
    }

    /*l++;*/
    *bin_size = l;

    return 0;
}


static int der2pem_data_format(unsigned char * der_data, 
                        unsigned int der_len,
                        unsigned char * pem_data,
                        unsigned int * pem_len,
                        char   * head_char, 
                        char   * tail_char)
{
    unsigned int rtn_code,i,j,k,m,x;
    char *buf;
       
    j = 0;

	if (der_len == 0)
	{
		*pem_len = 0;
		return 0 ;
	}

	buf = malloc((int)(der_len *4/3)+strlen(head_char)+strlen(tail_char) +(int)((der_len *4/3)/64)+20);
    if (buf==NULL)
	{
		return -1;
	}

    if(strlen(head_char) > 0){
        strcpy(buf,head_char);
        strcpy((char *)&pem_data[j],buf);
        j = strlen(buf);

        //pem_data[j++] = 0x0d;
        //pem_data[j++] = 0x0a;
    }

    rtn_code = base64_encode(der_data, der_len,buf);
    if(rtn_code != 0){
		free(buf);
        return -1;
    }
 
    k = strlen(buf);
    m = k/64;
    x = 0;
    for(i=0;i<m;i++){
        memcpy(&pem_data[j],&buf[x],64);
        j += 64;
        x += 64;
        //pem_data[j++] = 0x0d; //wangbaoming modify 
        //pem_data[j++] = 0x0a;
    }

    if(x < k){
        memcpy(&pem_data[j],&buf[x],k-x);
        j += (k-x);
        //pem_data[j++] = 0x0d;
        //pem_data[j++] = 0x0a;
    }
    else{
        if(x > k){
			free(buf);
            return -1;
        }
    }

    if(strlen(tail_char) > 0){
        strcpy(buf,tail_char);
    
        strcpy((char *)&pem_data[j],buf);
        j += strlen(buf);
        //pem_data[j++] = 0x0d;
        //pem_data[j++] = 0x0a;
    }
    pem_data[j] = 0;

    *pem_len = j;
    free(buf);
    return 0;
}

 
static int pem2der_data_format(char * pem_data, 
                        unsigned int pem_len,
                        unsigned char * der_data, 
                        unsigned int * der_len)
{
    unsigned int rtn_code,j,m;
    char *buf,c;
    int head_flag;

	if (pem_len == 0)
	{
		*der_len = 0;
		return 0 ;
	}


	buf = malloc(pem_len*2+20);
    if(buf==NULL){
	   return  -1;
	}

    head_flag = 0;

    /* find first ----- */
    j = 0;
    for(;;){
        if(j >= pem_len){
            break;   /* not found*/
        }

        if(pem_data[j] == '-'){
            j += 5;
            head_flag = 1;
            break; 
        }
        else{
            j++;
        }
    }

    /* find second ----- */
    if(head_flag){
        for(;;){
            if(j >= pem_len){
				free(buf);
                return -1;
            }

            if(pem_data[j] == '-'){
                j += 5;
                break; 
            }
            else{
                j++;
            }
        }
    }
    else{
        j = 0; /* no head */
    }

    /* read the data */
    m = 0;
    for(;;){
        if(head_flag){
            if(j >= pem_len){
				free(buf);
                return -1;
            }

            if(pem_data[j] == '-'){
                break;
            }
        }
        else{
            if(j >= pem_len){
                break;
            }
        }

        c = pem_data[j];
        if((c == '+') || (c == '/') || (c == '=') ||
                         ((c >= '0') && (c <= '9')) ||
                         ((c >= 'A') && (c <= 'Z')) ||
                         ((c >= 'a') && (c <= 'z'))){
            buf[m++] = pem_data[j];
        }
        j++;
    }
 
    buf[m] = 0;

    rtn_code = base64_decode(buf,der_data,&m);
    if(rtn_code != 0){
		free(buf);
        return -1;
    }

    *der_len = m;
	free(buf);
 
    return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_Pem2Der			            */
/*功能描述：    PEM编码转DER编码						*/
/*参数说明：    pemData     PEM数据              		*/
/*              pemDataLen  PEM数据长度			        */
/*              derData     DER数据			        	*/
/*              derDataLen  DER数据长度			        */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_Pem2Der(char* pemData, int pemDataLen, unsigned char* derData, int* derDataLen)
{
	int	rv = -1;

	//判断输出数据的缓冲区是否满足条件
	if(!pemData || (*derDataLen < pemDataLen/4*3))
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_INPUT_ERR, "IC_DBApi_Pem2Der Input Error");
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[1], 0, "Leave IC_DBApi_Pem2Der Error");
		return IC_DB_INPUT_ERR;
	}
	
	//将PEM格式转化为DER格式
	rv = pem2der_data_format(pemData, pemDataLen, derData, (unsigned long*)derDataLen);
	if(rv != 0)
	{
		return -1;
	}
	
	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_Der2Pem			            */
/*功能描述：    PEM编码转DER编码						*/
/*参数说明：    derData     DER数据              		*/
/*              derDataLen  DER数据长度			        */
/*              pemData     PEM数据			        	*/
/*              pemDataLen  PEM数据长度			        */
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_Der2Pem(unsigned char* derData, int derDataLen, char* pemData, int* pemDataLen)
{
	int	rv = -1;
	
	//判断输出数据的缓冲区是否满足条件
	if(derData==NULL || derDataLen<0 || pemData==NULL || pemDataLen==NULL )
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], IC_DB_INPUT_ERR, "IC_DBApi_Der2Pem Input Error");
		return IC_DB_INPUT_ERR;
	}

	//将DER格式转化为PEM格式
	rv = der2pem_data_format(derData, (unsigned long)derDataLen, (unsigned char*)pemData, (unsigned long*)pemDataLen, "", "");
	if (rv != 0)
	{
		return -1;
	}
	pemData[*pemDataLen] = '\0';
	

	return 0;
}


/********************************************************/
/*程 序 名：    IC_DBApi_GetDBTime			            */
/*功能描述：    获取数据库时间							*/
/*参数说明：    handle      数据库连接句柄              */
/*              dbTime   	数据库时间             		*/
/********************************************************/
__attribute__ ((visibility("default")))  int IC_DBApi_GetDBTime(ICDBHandle handle, char* dbTime)
{
	int rv = 0;
	ICDBRow     row;
    ICDBField   field[1];
   
    //初始化
    field[0].cont = (char*)dbTime;
    row.field = field;
    row.fieldCount = 1;
	
	//获取数据库时间
	rv = IC_DBApi_ExecSelSql(handle, "select to_char(sysdate, 'YYYYMMDDHH24MISS') from dual", &row);
	if(rv)
	{
		IC_DBLOG(__FILE__, __LINE__, ICORADBLevel[4], rv, "IC_DBApi_GetDBTime Get Time Error");
		return IC_DB_SQLGETTIME_ERR;
	}	

	return 0;
}

