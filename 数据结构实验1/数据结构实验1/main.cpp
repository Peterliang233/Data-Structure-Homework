#include "head.h"

void PrintMainMenu() {
	printf("��ѡ��������ԵĲ���\n");
	printf("1����˳����н��в���\n");
	printf("2���������н��в���\n");
	printf("3���˳�\n");
}
int main() {
	while (1) {
		PrintMainMenu();
		printf("��ѡ��:");
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