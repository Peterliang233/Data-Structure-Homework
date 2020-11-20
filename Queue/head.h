#include<iostream>
#include<cstdlib>
#include<cstring>
#define ElemType int
#define scanf scanf_s
#define MAXSIZE 1000
using namespace std;
typedef struct SqQueue { //循环队列结构体定义
	ElemType *base;
	int front;
	int rear;
}SqQueue;
typedef struct QNode {  //普通队列结构体定义
	ElemType val;
	struct QNode *next;
}QNode, *QueuePtr;
typedef struct { 
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;
typedef struct ListQueue {  //链队列结构体定义
	ElemType val;
	struct ListQueue *next;
}ListQueue;
bool InitQueue(LinkQueue &Q);   //初始化普通队列
bool InitSqQueue(SqQueue &Q);   //初始化循环队列
ListQueue *InitListQueuePtr();  //初始化链队列
ListQueue* EnListQueue(ListQueue *rear,ElemType e);
ListQueue* DeListQueue(ListQueue *rear, ListQueue*top,ElemType &e);
bool EnQueue(SqQueue &Q, ElemType e);  //循环队列入队
bool DeQueue(SqQueue &Q, ElemType &e); //循环队列出队
void PrintSqQueue();  //打印循环队列的菜单
void PrintLinkQueue();  //打印链队列的菜单
void TestSqQueue(); //循环队列的测试函数
void TestLinkQueue(); //链队列的测试函数