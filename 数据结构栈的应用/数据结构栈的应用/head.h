#include<iostream>
#include<cstdlib>
#define scanf scanf_s
#define MAXSIZE 1000
using namespace std;
typedef int ElemType;

typedef struct {  //��˳��ջ���ж���
	ElemType *data;
	int top;
}SqStack;

typedef struct StackNode {  //����ջ���ж���
	ElemType data;
	struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack{
	LinkStackPtr top;
	int count;
}LinkStack;

void InitSqStack(SqStack &s);  //��ʼ��˳��ջ
bool SqStackPush(SqStack &s, ElemType e);  //��˳��ջ���в������
bool SqStackPop(SqStack &s, ElemType &e); //��˳��ջ���е�������

void InitLinkStack(LinkStack &s);  //����ջ���г�ʼ������
bool LinkStackPush(LinkStack &s, ElemType e); //����ջ���в������
bool LinkStackPop(LinkStack &s, ElemType &e); //����ջ���е�������

void TestSqStack();  //����˳��ջ�ĺ���
void TestLinkStack();  //������ջ�ĺ���