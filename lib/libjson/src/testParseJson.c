#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parseJson.h"
#include "cJSON.h"

/*
int main01()
{
		cJSON *json = cJSON_CreateObject();
		cJSON_AddStringToObject(json,"msg_id","10101010101");
		cJSON_AddStringToObject(json,"event_name","stationstatelog");
		cJSON *array = NULL;
		cJSON_AddItemToObject(json,"event_body",array=cJSON_CreateArray());
		cJSON *obj = NULL;
		cJSON_AddItemToArray(array,obj=cJSON_CreateObject());
		cJSON_AddStringToObject(obj,"AgentID","1002");
		cJSON_AddItemToObject(obj,"Station",cJSON_CreateString("9001"));
		cJSON_AddStringToObject(obj,"From_STR","1");
		cJSON_AddStringToObject(obj,"State","1");
		cJSON_AddStringToObject(obj,"AUX_Code","1");
		cJSON_AddStringToObject(obj,"Begintime","1");
		cJSON_AddItemToObject(obj,"Endtime",cJSON_CreateString("10000000001"));
		cJSON_AddStringToObject(obj,"StateInfo","1002");
		cJSON_AddItemToObject(obj,"CustPhone",cJSON_CreateString("9001"));
		cJSON_AddStringToObject(obj,"CallDirect","1");
		cJSON_AddItemToObject(obj,"Split",cJSON_CreateString("1"));
		
		cJSON_AddItemToArray(array,obj=cJSON_CreateObject());
		cJSON_AddStringToObject(obj,"AgentID","1011102");
		cJSON_AddItemToObject(obj,"Station",cJSON_CreateString("9001"));
		cJSON_AddStringToObject(obj,"From_STR","1acaa");
		cJSON_AddStringToObject(obj,"State","1avvaz");
		cJSON_AddStringToObject(obj,"AUX_Code","1cac");
		cJSON_AddStringToObject(obj,"Begintime","CZxC1");
		cJSON_AddItemToObject(obj,"Endtime",cJSON_CreateString("10000111000001"));
		cJSON_AddStringToObject(obj,"StateInfo","1002");
		cJSON_AddItemToObject(obj,"CustPhone",cJSON_CreateString("901101"));
		cJSON_AddStringToObject(obj,"CallDirect","1");
		cJSON_AddItemToObject(obj,"Split",cJSON_CreateString("1"));
		
		cJSON_AddItemToArray(array,obj=cJSON_CreateObject());
		cJSON_AddStringToObject(obj,"AgentID","1002");
		cJSON_AddItemToObject(obj,"Station",cJSON_CreateString("9001"));
		cJSON_AddStringToObject(obj,"From_STR","1");
		cJSON_AddStringToObject(obj,"State","1");
		cJSON_AddStringToObject(obj,"AUX_Code","1");
		cJSON_AddStringToObject(obj,"Begintime","1");
		cJSON_AddItemToObject(obj,"Endtime",cJSON_CreateString("10000000001"));
		cJSON_AddStringToObject(obj,"StateInfo","1002");
		cJSON_AddItemToObject(obj,"CustPhone",cJSON_CreateString("9001"));
		cJSON_AddStringToObject(obj,"CallDirect","12222222222222");
		cJSON_AddItemToObject(obj,"Split",cJSON_CreateString("11111"));
	  char *buf = cJSON_Print(json);
		printf("%s\n", buf);
		
		printf("======================\n");
		char *str;
		str = EveNameParse(buf);
		printf("%s\n", str);
		printf("======================\n");
		
		printf("======================\n");
		ULANE_ExtStateLog extLog[10]={{0}};
		ExtJsonDecode(buf, extLog);
		for(int i=0;i<3;i++)  
    {  
        printf("i=%d, iAgentID=%s,iStation=%s,iFrom_STR=%s,iFrom_STR=%s,iState=%s\n, iAUX_Code=%s,iBegintime=%s,iEndtime=%s,iStateInfo=%s,iCustPhone=%s, iCallDirect=%s\n, iSplit=%s\n",  
                i,
                extLog[i].iAgentID,    
                extLog[i].iStation, 
                extLog[i].iFrom_STR,  
                extLog[i].iState,  
                extLog[i].iAUX_Code,  
                extLog[i].iBegintime,
                extLog[i].iEndtime,  
                extLog[i].iStateInfo,  
                extLog[i].iCustPhone,  
                extLog[i].iCallDirect, 
                extLog[i].iSplit);  
    } 
		printf("======================\n");
		cJSON_Delete(json);	
}
*/

	/*
int main03()
{
	cJSON *json = cJSON_CreateObject();
	cJSON_AddStringToObject(json,"msg_id","10101010101");
	cJSON_AddStringToObject(json,"event_name","stationstatelog");
	cJSON *array = NULL;
	cJSON_AddItemToObject(json,"event_body",array=cJSON_CreateArray());
	cJSON *obj = NULL;
	cJSON_AddItemToArray(array,obj=cJSON_CreateObject());
	cJSON_AddStringToObject(obj,"VDN","1002");
	cJSON_AddItemToObject(obj,"Split",cJSON_CreateString("9001"));
	cJSON_AddStringToObject(obj,"UCID","1");
	cJSON_AddStringToObject(obj,"CallID","1");
	cJSON_AddStringToObject(obj,"From_STR","1");
	cJSON_AddStringToObject(obj,"ANI","1");
	cJSON_AddItemToObject(obj,"DNIS",cJSON_CreateString("11"));
	cJSON_AddStringToObject(obj,"Enter_Time","1002");
	cJSON_AddItemToObject(obj,"Queue_Time",cJSON_CreateString("11"));
	cJSON_AddStringToObject(obj,"Deliver_Time","1");
	cJSON_AddItemToObject(obj,"Estab_Time",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"Station",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"AgentID",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"End_Time",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"End_Reason",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"VDN_Dur",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"Queue_Dur",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"Ring_Dur",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"Talk_Dur",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"Hold_Count",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"Hold_Dur",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"TransferCount",cJSON_CreateString("11"));
	cJSON_AddItemToObject(obj,"ConferenceCount",cJSON_CreateString("11"));

	//-------------------------------------------------------------
	cJSON_AddItemToArray(array,obj=cJSON_CreateObject());
  cJSON_AddStringToObject(obj,"VDN","1002");
	cJSON_AddItemToObject(obj,"Split",cJSON_CreateString("9001"));
	cJSON_AddStringToObject(obj,"UCID","1");
	cJSON_AddStringToObject(obj,"CallID","1");
	cJSON_AddStringToObject(obj,"From_STR","1");
	cJSON_AddStringToObject(obj,"ANI","1");
	cJSON_AddItemToObject(obj,"DNIS",cJSON_CreateString("10000000001"));
	cJSON_AddStringToObject(obj,"Enter_Time","1002");
	cJSON_AddItemToObject(obj,"Queue_Time",cJSON_CreateString("9001"));
	cJSON_AddStringToObject(obj,"Deliver_Time","1");
	cJSON_AddItemToObject(obj,"Estab_Time",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Station",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"AgentID",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"End_Time",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"End_Reason",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"VDN_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Queue_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Ring_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Talk_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Hold_Count",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Hold_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"TransferCount",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"ConferenceCount",cJSON_CreateString("1"));
	
	//-------------------------------------------------------------
	cJSON_AddItemToArray(array,obj=cJSON_CreateObject());
  cJSON_AddStringToObject(obj,"VDN","1002");
	cJSON_AddItemToObject(obj,"Split",cJSON_CreateString("9001"));
	cJSON_AddStringToObject(obj,"UCID","1");
	cJSON_AddStringToObject(obj,"CallID","1");
	cJSON_AddStringToObject(obj,"From_STR","1");
	cJSON_AddStringToObject(obj,"ANI","1");
	cJSON_AddItemToObject(obj,"DNIS",cJSON_CreateString("10000000001"));
	cJSON_AddStringToObject(obj,"Enter_Time","1002");
	cJSON_AddItemToObject(obj,"Queue_Time",cJSON_CreateString("9001"));
	cJSON_AddStringToObject(obj,"Deliver_Time","1");
	cJSON_AddItemToObject(obj,"Estab_Time",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Station",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"AgentID",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"End_Time",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"End_Reason",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"VDN_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Queue_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Ring_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Talk_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Hold_Count",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Hold_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"TransferCount",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"ConferenceCount",cJSON_CreateString("1"));
	
	//-------------------------------------------------------------
	cJSON_AddItemToArray(array,obj=cJSON_CreateObject());
  cJSON_AddStringToObject(obj,"VDN","1002");
	cJSON_AddItemToObject(obj,"Split",cJSON_CreateString("9001"));
	cJSON_AddStringToObject(obj,"UCID","1");
	cJSON_AddStringToObject(obj,"CallID","1");
	cJSON_AddStringToObject(obj,"From_STR","1");
	cJSON_AddStringToObject(obj,"ANI","1");
	cJSON_AddItemToObject(obj,"DNIS",cJSON_CreateString("10000000001"));
	cJSON_AddStringToObject(obj,"Enter_Time","1002");
	cJSON_AddItemToObject(obj,"Queue_Time",cJSON_CreateString("9001"));
	cJSON_AddStringToObject(obj,"Deliver_Time","1");
	cJSON_AddItemToObject(obj,"Estab_Time",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Station",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"AgentID",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"End_Time",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"End_Reason",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"VDN_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Queue_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Ring_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Talk_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Hold_Count",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"Hold_Dur",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"TransferCount",cJSON_CreateString("1"));
	cJSON_AddItemToObject(obj,"ConferenceCount",cJSON_CreateString("1"));
  char *buf = cJSON_Print(json);
  int len = GetJsonArrayInnerLen(buf);
  printf("%d\n", len);
  int i;
  ULANE_VDNCallLog vcllog[2] = {{0}};
  TelinJsonDecode(buf, vcllog);
	for(i=0;i<len;i++)  
    {  
        printf("i=%d, iVDN=%s,iSplit=%s,iUCID=%s,iCallID=%s,iFrom_STR=%s\n,iANI=%s,iDNIS=%s,iEnter_Time=%s,iQueue_Time=%s,iDeliver_Time=%s, iEstab_Time=%s\n, iStation=%s\n,iAgentID=%s\n,iEnd_Time =%s\n,iEnd_Reason=%s\n, iVDN_Dur=%s\n, iQueue_Dur=%s\n,iRing_Dur=%s\n,iTalk_Dur=%s\n,iHold_Count=%s\n,iHold_Dur=%s\n,iTransferCount=%s\n,iConferenceCount=%s\n",  
                i,
                vcllog[i].iVDN,    
                vcllog[i].iSplit, 
                vcllog[i].iUCID,  
                vcllog[i].iCallID,  
                vcllog[i].iFrom_STR,  
                vcllog[i].iANI,
                vcllog[i].iDNIS,  
                vcllog[i].iEnter_Time,  
                vcllog[i].iQueue_Time,  
                vcllog[i].iDeliver_Time, 
                vcllog[i].iEstab_Time,
                vcllog[i].iStation,
                vcllog[i].iAgentID,
                vcllog[i].iEnd_Time,
                vcllog[i].iEnd_Reason,
                vcllog[i].iVDN_Dur,
                vcllog[i].iQueue_Dur,
                vcllog[i].iRing_Dur,
                vcllog[i].iTalk_Dur,
                vcllog[i].iHold_Count,
                vcllog[i].iHold_Dur,
                vcllog[i].iTransferCount,
                vcllog[i].iConferenceCount);  
    } 
		cJSON_Delete(json);	
  return 0;	
}           
*/
int main()
{
	  cJSON *json = cJSON_CreateObject();
		cJSON_AddStringToObject(json,"cmdName","agentlogon");
		cJSON_AddStringToObject(json,"msgID","100000001");
		cJSON_AddStringToObject(json,"agentid","agentmonitor1");
		cJSON_AddStringToObject(json,"agenttype","agenttype_3");
	  char *buf = cJSON_Print(json);
	  strcat(buf, "eof");
		printf("%s\n", buf);
		return 0;		
}


