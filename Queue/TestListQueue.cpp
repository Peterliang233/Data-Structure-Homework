#include "head.h"
void PrintSqQueue() {
	printf("欢迎你使用链队列进行存储\n");
	printf("你可以选择以下功能\n");
	printf("1、对链队列进行入队操作\n");
	printf("2、对链队列进行出队操作\n");
	printf("3、退出当前页面，回到主菜单\n");
}
void TestLinkQueue() {
	ListQueue* top, *rear;
	top = rear = InitListQueuePtr();
	while (1) {
		system("pause");
		system("cls");
		PrintSqQueue();
		printf("请选择：");
		int ch;
		scanf("%d", &ch);
		int e;
		switch (ch) {
		case 1:
			printf("请输出你想入队的数字：");
			scanf("%d", &e);
			rear=EnListQueue(rear, e);
			printf("入队成功\n");
			break;
		case 2:
			rear = DeListQueue(rear, top, e);
			printf("出队成功，出队的数字为：%d\n", e);
			break;
		case 3:
			return;
		}
	}
}