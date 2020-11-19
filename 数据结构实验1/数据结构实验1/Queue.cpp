#include "head.h"
bool InitQueue(LinkQueue &Q) {  //初始化普通队列
	Q.front = Q.rear = (QueuePtr)malloc(sizeof(QNode));
	if (!Q.front) return false;
	Q.front->next = NULL;
	return true;
}