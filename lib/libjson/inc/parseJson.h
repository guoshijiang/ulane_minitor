/*=============================================================
 *�ļ�����: parseJson.h
 *����ʱ��: 2017.6.19
 *��    ��: ������
 *�޸ļ�¼:
 *   2017.6.19 �����ļ�
 *����������
 *  ��װ����JSON�ļ�
 * ===========================================================*/
#ifndef __PARSEJSON_H
#define __PARSEJSON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"

//��Ķ���
#define MSGLEN         100     //�ṹ�����������


//�������Ͷ���
typedef char ULANE_Array[MSGLEN];

//�ֻ�״̬��ϸ
typedef struct _ULANE_ExtStateLog
{
	ULANE_Array iAgentID;
  ULANE_Array iStation;
  ULANE_Array iFrom_STR;
  ULANE_Array iState;
  ULANE_Array iAUX_Code;
  ULANE_Array iBegintime;
  ULANE_Array iEndtime;
  ULANE_Array iStateInfo;
  ULANE_Array iCustPhone;
  ULANE_Array iCallDirect;
  ULANE_Array iSplit;
}ULANE_ExtStateLog;

//����ͨ����ϸ
typedef struct _ULANE_VDNCallLog
{
	ULANE_Array iVDN;   
	ULANE_Array iSplit;
	ULANE_Array iUCID;   
	ULANE_Array iCallID;    
	ULANE_Array iFrom_STR;
	ULANE_Array iANI;
	ULANE_Array iDNIS;
	ULANE_Array iEnter_Time;
	ULANE_Array iQueue_Time;
	ULANE_Array iDeliver_Time;
	ULANE_Array iEstab_Time;
	ULANE_Array iStation;
	ULANE_Array iAgentID; 
	ULANE_Array iEnd_Time;
	ULANE_Array iEnd_Reason;
	ULANE_Array iVDN_Dur;
	ULANE_Array iQueue_Dur;
	ULANE_Array iRing_Dur; 
	ULANE_Array iTalk_Dur; 
	ULANE_Array iHold_Count;
	ULANE_Array iHold_Dur;  
	ULANE_Array iTransferCount;
	ULANE_Array iConferenceCount;
}ULANE_VDNCallLog;

//����ͨ����ϸ
typedef struct _ULANE_StationCallLog
{
	ULANE_Array iAgentID;
	ULANE_Array iStation;
	ULANE_Array iUCID;    
	ULANE_Array iCallID;    
	ULANE_Array iCallDirect;
	ULANE_Array iFrom_STR;
	ULANE_Array iANI;
	ULANE_Array iDNIS;    
	ULANE_Array iMakeCall_Time;
	ULANE_Array iDeliver_time;
	ULANE_Array iEstablish_time;	
	ULANE_Array iEnd_time; 
	ULANE_Array iEnd_Reason;
	ULANE_Array iVDN;     
	ULANE_Array iSplit;   
	ULANE_Array iVDN_Dur;
	ULANE_Array iTalk_Dur; 
	ULANE_Array iRing_Dur; 
	ULANE_Array iHold_Dur; 
	ULANE_Array iHoldCount;
	ULANE_Array iConsultCount;
	ULANE_Array iConferenceCount;
	ULANE_Array iNext_UCID;
	ULANE_Array iNext_CallID;
}ULANE_StationCallLog;

//ǩ��ǩ����ϸ
typedef struct _ULANE_AgentSignInLog
{
	ULANE_Array iAgentLogonID;
	ULANE_Array iFrom_STR;
	ULANE_Array iAgentID;
	ULANE_Array iStation;
	ULANE_Array iOpState;
	ULANE_Array iAgentSkill;	
	ULANE_Array iCDTime;
}ULANE_AgentSignInLog;

/*=========================================================
 *�������: lpJStr        JSON��
 *��������: ��
 *����ֵ:   �ɹ������¼�����,ʧ�ܷ��ش�����
 *����˵��: ����JSON��������
 *===========================================================*/
char *EveNameParse(char *lpJStr);

/*=========================================================
 *�������: lpJStr        JSON��
 *��������: ��
 *����ֵ:   �ɹ�����JSON���ڲ�����ĳ���,ʧ�ܷ��ش�����
 *����˵��: ��ȡjson���鳤��
 *===========================================================*/
int GetJsonArrayInnerLen(char *lpJStr);

/*=========================================================
 *�������: lpJStr        JSON��
 *��������: extLog        �ṹ������
 *����ֵ:   �ɹ�����0, ʧ�ܷ��ش�����
 *����˵��: �����ֻ�״̬��ϸ��JSON
 *===========================================================*/
int ExtJsonDecode(char* lpJStr, ULANE_ExtStateLog extLog[]);  

/*=========================================================
 *�������: lpJStr        JSON��
 *��������: vcllog        �ṹ������
 *����ֵ:   �ɹ�����0, ʧ�ܷ��ش�����
 *����˵��: ��������ͨ����ϸ��JSON
 *===========================================================*/
int TelinJsonDecode(char* lpJStr, ULANE_VDNCallLog vcllog[]);

/*=========================================================
 *�������: lpJStr        JSON��
 *��������: sclLog        �ṹ������
 *����ֵ:   �ɹ�����0, ʧ�ܷ��ش�����
 *����˵��: ��������ͨ����ϸ��JSON
 *===========================================================*/
int TeloutExtJsonDecode(char* lpJStr, ULANE_StationCallLog sclLog[]);

/*=========================================================
 *�������: lpJStr        JSON��
 *��������: asiLog        �ṹ������
 *����ֵ:   �ɹ�����0, ʧ�ܷ��ش�����
 *����˵��: ����ǩ��ǩ��ϸ��JSON
 *===========================================================*/
int SignInOutJsonDecode(char* lpJStr, ULANE_AgentSignInLog asiLog[]);
#endif
