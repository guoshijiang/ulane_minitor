#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "Socket.h"

int main()
{
	char socket_addr[20] = "192.168.1.179";
	unsigned short socket_port  = 8088;
	
	size_t recv_len = 0;
	char  *recv_buf = NULL;
	char   recv_len_buf[10];
	
	Socket severSock;
	Socket lSock;
	
	if(lSock.Bind(socket_addr, socket_port) < 0)
	{
		printf("Bind fail\n");
		return -1;
	}
	if(lSock.Listen(10) < 0)
	{
		printf("listen err");	
		return -1;
	}
	
	printf("wait for connect\n");
	while(1)
	{
		if(lSock.Accept(severSock) > 0)
		{
		  threadpool_t *thp = threadpool_create(3,100,100);   
			printf("pool inited");
			
			
			
			printf("client connect to server!!!\n");
			//接收数据长度
			memset(recv_len_buf, 0x00, sizeof(recv_len_buf));
			if(severSock.Recv(recv_len_buf, 8, 60000) < 0)
			{
				severSock.Close();
				continue;
			}			
			//接收数据
			recv_len = atoi(recv_len_buf);
			recv_buf = (char*)malloc(sizeof(char)*recv_len+1);
			memset(recv_buf, 0x00, sizeof(char)*recv_len+1);
			if(severSock.Recv(recv_buf, recv_len, 6000) < 0)
			{
				printf("Recv data timeout%s\n", recv_buf);
				severSock.Close();
				if(recv_buf != NULL)
				{
					free(recv_buf);
					recv_buf = NULL;
				}
				continue;
			}
			
			
			
			printf("Recv data %d|%s\n", recv_len, recv_buf);
			if(recv_buf != NULL)
			{
				free(recv_buf);
				recv_buf = NULL;
			}
			severSock.Close();
		}
	}
	lSock.Close();
	printf("Close OK\n");
	return 0;
}

//===================================================
/*
void *process(void *arg)
{
	printf("thread 0x%x working on task %d\n ",(unsigned int)pthread_self(),*(int *)arg);
	sleep(1);
	printf("task %d is end\n",*(int *)arg);
	return NULL;
}
*/

//-==================================================
/*
	threadpool_t *thp = threadpool_create(3,100,100);   
	printf("pool inited");

	int *num = (int *)malloc(sizeof(int)*20);
  int i;
	for (i=0;i<10;i++) {
		num[i]=i;
		printf("add task %d\n",i);
		threadpool_add(thp,process,(void*)&num[i]);
	}

	sleep(10);
	threadpool_destroy(thp);

    return 0;
*/
