#include "head.h"
bool InitQueue(LinkQueue &Q) {  //��ʼ����ͨ����
	Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if (!Q.front) return false;
	Q.front->next = NULL;
	return true;
}