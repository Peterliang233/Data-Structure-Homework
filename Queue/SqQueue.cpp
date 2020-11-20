#include "head.h"
bool InitSqQueue(SqQueue &Q) {  //初始化循环队列
	Q.base = (ElemType *)malloc(MAXSIZE * sizeof(ElemType));
	if (!Q.base)  return false;
	Q.front = Q.rear = 0;
	return true;
}

bool EnQueue(SqQueue &Q, ElemType e) {   //循环队列入队
	if ((!Q.rear + 1) % MAXSIZE == Q.front) return false;  //队列满了的情况
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXSIZE;
	return true;
}

bool DeQueue(SqQueue &Q, ElemType &e) {  //循环队列出队
	if (Q.front == Q.rear) return false;
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXSIZE;
	return true;
}