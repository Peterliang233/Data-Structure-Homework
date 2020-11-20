#include "head.h"

void PrintMenu1() {
	printf("感谢使用顺序栈\n");
	printf("1、对顺序栈进行添加操作\n");
	printf("2、对顺序栈进行弹出操作\n");
	printf("3、退出当前程序\n");
	printf("请选择：");
}

void TestSqStack() {
	SqStack s;
	InitSqStack(s);
	while (1) {
		system("pause");
		system("cls");
		ElemType e;
		PrintMenu1();
		int ch;
		scanf("%d", &ch);
		if (ch == 1) {
			printf("请选择您想压栈的数字：");
			scanf("%d", &e);
			if (SqStackPush(s, e)) {
				printf("压栈成功\n");
			}
			else {
				printf("压栈失败\n");
			}
		}
		if (ch == 2) {
			if (SqStackPop(s, e)) {
				printf("出栈成功，出栈的数字为：%d\n", e);
			}
			else {
				printf("出栈失败\n");
			}
		}
		if (ch == 3) {
			break;
		}
	}
}