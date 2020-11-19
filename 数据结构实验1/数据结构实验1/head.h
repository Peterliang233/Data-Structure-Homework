#include<iostream>
#include<cstdlib>
#include<cstring>
#define ElemType int
#define scanf scanf_s
#define MAXSIZE 1000
using namespace std;
typedef struct SqQueue { //ѭ�����нṹ�嶨��
	ElemType *base;
	int front;
	int rear;
}SqQueue;
typedef struct QNode {  //��ͨ���нṹ�嶨��
	ElemType val;
	struct QNode *next;
}QNode, *QueuePtr;
typedef struct { 
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;
typedef struct ListQueue {  //�����нṹ�嶨��
	ElemType val;
	struct ListQueue *next;
}ListQueue;
bool InitQueue(LinkQueue &Q);   //��ʼ����ͨ����
bool InitSqQueue(SqQueue &Q);   //��ʼ��ѭ������
ListQueue *InitListQueuePtr();  //��ʼ��������
ListQueue* EnListQueue(ListQueue *rear,ElemType e);
ListQueue* DeListQueue(ListQueue *rear, ListQueue*top,ElemType &e);
bool EnQueue(SqQueue &Q, ElemType e);  //ѭ���������
bool DeQueue(SqQueue &Q, ElemType &e); //ѭ�����г���
void PrintSqQueue();  //��ӡѭ�����еĲ˵�
void PrintLinkQueue();  //��ӡ�����еĲ˵�
void TestSqQueue(); //ѭ�����еĲ��Ժ���
void TestLinkQueue(); //�����еĲ��Ժ���