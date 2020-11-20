#include "head.h"
bool InitSqQueue(SqQueue &Q) {  //��ʼ��ѭ������
	Q.base = (ElemType *)malloc(MAXSIZE * sizeof(ElemType));
	if (!Q.base)  return false;
	Q.front = Q.rear = 0;
	return true;
}

bool EnQueue(SqQueue &Q, ElemType e) {   //ѭ���������
	if ((!Q.rear + 1) % MAXSIZE == Q.front) return false;  //�������˵����
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXSIZE;
	return true;
}

bool DeQueue(SqQueue &Q, ElemType &e) {  //ѭ�����г���
	if (Q.front == Q.rear) return false;
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXSIZE;
	return true;
}