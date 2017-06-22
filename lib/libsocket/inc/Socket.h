/*=========================================================
 *�ļ�����:  Socket.h
 *�������ڣ�2017-6-15
 *���ߣ�������
 *�޸ļ�¼��
 *2017-6-15  �״δ���
 *�������� Socket��װ
===========================================================*/
#ifndef __SOCKET_H
#define __SOCKET_H

#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>


#define TIME_INFINITE -1
#define _TRUE_    1
#define _FALSE_   0
  
class Socket
{
public:
  Socket();
  Socket(int hSock);
  ~Socket();
    
  int Connect(const char *szIp, int iPort);
  int Bind(const char *szIp, int iPort);
  int Listen(int iNum = 3);
  int Accept(Socket &conSock);
  int Close();
  int Send(const char *szData, int iDataLen, int iTimeOut = 10);
  int Recv(char *szData, int iDataLen, int iTimeOut = 10);
  int GetHandle();  
private:
  int Attach(int iSock);
  int IsReadyToRead(int iTimeOut);
  int IsReadyToWrite(int iTimeOut);
  
private:
  int m_iSock;
};

#endif
