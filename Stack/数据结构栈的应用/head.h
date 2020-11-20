#include<iostream>
#include<cstdlib>
#define scanf scanf_s
#define MAXSIZE 1000
using namespace std;
typedef int ElemType;

typedef struct {  //对顺序栈进行定义
	ElemType *data;
	int top;
}SqStack;

typedef struct StackNode {  //对链栈进行定义
	ElemType data;
	struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack{
	LinkStackPtr top;
	int count;
}LinkStack;

void InitSqStack(SqStack &s);  //初始化顺序栈
bool SqStackPush(SqStack &s, ElemType e);  //对顺序栈进行插入操作
bool SqStackPop(SqStack &s, ElemType &e); //对顺序栈进行弹出操作

void InitLinkStack(LinkStack &s);  //对链栈进行初始化操作
bool LinkStackPush(LinkStack &s, ElemType e); //对链栈进行插入操作
bool LinkStackPop(LinkStack &s, ElemType &e); //对链栈进行弹出操作

void TestSqStack();  //测试顺序栈的函数
void TestLinkStack();  //测试链栈的函数