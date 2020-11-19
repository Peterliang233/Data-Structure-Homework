#include "head.h"
ListQueue *InitListQueuePtr() {  //初始化链队列
	ListQueue *head = (ListQueue*)malloc(sizeof(ListQueue));
	if (!head) exit(0);
	head->next = NULL;
	return head;
}

ListQueue* EnListQueue(ListQueue *rear, ElemType e) {
	ListQueue *p = (ListQueue*)malloc(sizeof(ListQueue));
	p->val = e;
	p->next = NULL;
	rear->next = p;
	rear = p;
	return rear;
}

ListQueue* DeListQueue(ListQueue *rear, ListQueue *top, ElemType &e) {
	if (top->next == NULL) {
		printf("队列为空\n");
		return rear;
	}
	ListQueue * p = top->next;
	e = p->val;
	top->next = p->next;
	if (p == rear) {
		rear = top;
	}
	free(p);
	return rear;
}