/*=========================================================
 *�ļ�����: 			Config.c
 *�������ڣ�			2017-6-23
 *��    ��:       ������
 *�޸ļ�¼��			2017-6-23  �״δ���
 *����������     �������ļ���������
 *===========================================================*/
#include"Config.h"  

static char *substr(char *linebuf,char *pKey)  
{  
	char *pTmp = NULL, *pRv = NULL;  
	int lenKey = 0,len = 0;
	if (linebuf==NULL || pKey==NULL)  
	{
		printf("����Ϊ�ճ���(str==NULL || substr==NULL)\n");  
		return pRv;  
	}  
	pRv = strstr(linebuf, pKey);  
	if(pRv == NULL)  
	{  
		return pRv;  
	}  
	pTmp = pRv;  
	lenKey = strlen(pKey);  
	while(*pTmp != '\0' && *pTmp != ' '&& *pTmp != '=' && *pTmp != '\n')  
	{  
		len++;  
		pTmp++;  
		if(len>lenKey)  
		{  
			break;  
		}  
	}  
	if (lenKey != len)  
	{  
		return NULL;  
	}  
	return pRv;  
}  
 
int GetCfItem(const char *pFileName, char *pKey, char * pValue, int * pValueLen )  
{  
	int rv = 0; 
	FILE *fp = NULL;  
	char linebuf[LineMaxLen];  
	char *pTmp = NULL, *pBegin = NULL, *pEnd = NULL;  
	if (pFileName==NULL||pKey==NULL||pValue==NULL||pValueLen==NULL)  
	{  
		rv = -1;
		printf("��ȡ����ʧ��!\n");   
		goto End;  
	}  
	fp = fopen(pFileName,"r"); 
	if (fp==NULL)  
	{  
		rv = -2; 
		printf("���ļ�ʧ��\n");  
		goto End;  
	}  
	while(!feof(fp))  
	{  
		memset(linebuf,0,LineMaxLen);  
		pTmp = fgets(linebuf, LineMaxLen, fp);
		if (pTmp==NULL)  
		{  
			break;  
		}  
		pTmp = substr(linebuf, pKey);
		if (pTmp==NULL)  
		{  
			continue;  
		} 
		pTmp = strchr(linebuf, '='); 
		if (pTmp==NULL)  
		{  
			continue;  
		}  
		pTmp=pTmp+1;

		while (1) 
		{  
			if(*pTmp==' ')  
			{  
				pTmp++;  
			}  
			else  
			{  
				pBegin = pTmp; 
				if(*pBegin == '\n'||*pBegin=='\0')  
				{  
					rv = -3; 
					printf("��Ӧ�ļ�û�����ֵ\n");     
				}  
				break;  
			}  
		}  
		while (1) 
		{  
			if(*pTmp==' '||*pTmp=='\n'||*pTmp=='\0')  
			{  
				break;  
			}  
			else  
			{  
				pTmp++;  
			}  
		}  
		pEnd = pTmp;  
		*pValueLen = pEnd-pBegin;  
		memcpy(pValue,pBegin,*pValueLen); 
		*(pValue+*pValueLen)='\0';  
		break;  
	} 
	if(pBegin==NULL)   
	{  
		printf("�����ҵ���\n");     
		rv = -4;  
	}  
End:  
	if (fp!=NULL)  
	{  
		fclose(fp);  
	}  
	return rv;  
} 

char *ReadConItem(char *key)
{
	char fname[128];
	memset(fname, 0, sizeof(fname));
	sprintf(fname, "%s/log/config.ini",getenv("HOME"));
	char *pFileName= fname;
  int len = 0, ret = 0; 
  memset(value, 0, sizeof(value));   
  ret = GetCfItem(pFileName,key,value,&len);  
  if(ret!=0)  
  {  
    printf("��ȡ��ֵ����\n");  
    return NULL;  
  }
  return value;
} 