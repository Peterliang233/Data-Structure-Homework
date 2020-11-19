#include "head.h"

void PrintMainMenu() {
	printf("请选择你想测试的部分\n");
	printf("1、按顺序队列进行测试\n");
	printf("2、按链队列进行测试\n");
	printf("3、退出\n");
}
int main() {
	while (1) {
		PrintMainMenu();
		printf("请选择:");
		int ch;
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			TestSqQueue();
			break;
		case 2:
			TestLinkQueue();
			break;
		case 3:
			return 0;
		}
		system("pause");
		system("cls");
	}
	return 0;
}