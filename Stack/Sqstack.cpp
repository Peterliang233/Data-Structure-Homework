#include "head.h"

void InitSqStack(SqStack &s) {
	s.data = (ElemType*)malloc(MAXSIZE*sizeof(ElemType));
	s.top = -1;
}

bool SqStackPush(SqStack &s, ElemType e) {
	if (s.top == MAXSIZE - 1) {
		return false;
	}
	s.top++;
	s.data[s.top] = e;
	return true;
}

bool SqStackPop(SqStack &s, ElemType &e){
	if (s.top == -1) {
		return false;
	}
	e = s.data[s.top];
	s.top--;
	return true;
}