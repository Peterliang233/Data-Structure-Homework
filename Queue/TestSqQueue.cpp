#include "head.h"
void PrintLinkQueue() {
	printf("欢迎你使用循环队列进行存储\n");
	printf("你可以选择以下功能\n");
	printf("1、对循环队列进行入队操作\n");
	printf("2、对循环队列进行出队操作\n");
	printf("3、退出当前页面，回到主菜单\n");
}
void TestSqQueue() {
	SqQueue Q;
	InitSqQueue(Q);
	while (1) {
		system("pause");
		system("cls");
		PrintLinkQueue();
		printf("请选择：");
		int ch;
		scanf("%d", &ch);
		int e;
		switch (ch) {
		case 1:
			printf("请输入你想入队的数字:");
			scanf("%d", &e);
			if (EnQueue(Q, e) == true) {
				printf("入队成功\n");
			}
			else {
				printf("入队失败\n");
			}
			break;
		case 2:
			if (DeQueue(Q, e) == true)
				printf("出队成功,出队的数字为：%d\n", e);
			else
				printf("出队失败\n");
			break;
		case 3:
			return;
		}
	}
}