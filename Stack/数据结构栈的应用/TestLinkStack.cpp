#include "head.h"

void PrintMenu2() {
	printf("欢迎对链栈进行操作\n");
	printf("1、对链栈进行插入操作\n");
	printf("2、对链栈进行弹出操作\n");
	printf("3、退出当前程序\n");
	printf("请选择：");
}

void TestLinkStack() {
	LinkStack s;
	InitLinkStack(s);
	while (1) {
		system("pause");
		system("cls");
		ElemType e;
		PrintMenu2();
		int ch;
		scanf("%d", &ch);
		if (ch == 1) {
			printf("请输入您想插入的数字：");
			scanf("%d", &e);
			if (LinkStackPush(s, e)) {
				printf("插入成功\n");
			}
			else {
				printf("插入失败\n");
			}
		}
		if (ch == 2) {
			if (LinkStackPop(s, e)) {
				printf("弹出成功,弹出的数字为：%d\n", e);
			}
			else {
				printf("弹出失败\n");
			}
		}
		if (ch == 3) {
			printf("感谢使用\n");
			break;
		}
	}
}