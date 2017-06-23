
#ifndef _IC_DBAPI_LOG_
#define _IC_DBAPI_LOG_

#ifdef  __cplusplus
extern "C" {
#endif

//实际使用的Level
extern int  ICORADBLevel[5];
void IC_DBLOG(const char *file, int line, int level, int status, const char *fmt, ...);


#ifdef __cplusplus
}
#endif


#endif
