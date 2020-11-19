#include "head.h"

void InitLinkStack(LinkStack &s) {
	s.top = NULL;
	s.count = 0;
}

bool LinkStackPush(LinkStack &s, ElemType e) {
	LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
	p->data = e;
	p->next = s.top;
	s.top = p;
	s.count++;
	return true;
}

bool LinkStackPop(LinkStack &s, ElemType &e) {
	if (s.count == 0) return false;
	LinkStackPtr p;
	e = s.top->data;
	p = s.top;
	s.top = s.top->next;
	free(p);
	s.count--;
	return true;
}