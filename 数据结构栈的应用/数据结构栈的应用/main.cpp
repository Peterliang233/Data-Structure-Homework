#include "head.h"

using namespace std;
void PrintMenu() {
	printf("��ѡ��������в��Ե�ջ������\n");
	printf("1����˳��ջ���в���\n");
	printf("2������ջ���в���\n");
	printf("3���˳���������\n");
	printf("��ѡ��");
}
int main() {
	while (1) {
		PrintMenu();
		int ch;
		scanf("%d", &ch);
		if (ch == 1) {
			TestSqStack();
		}
		if (ch == 2) {
			TestLinkStack();
		}
		if (ch == 3) {
			printf("��лʹ��!^_^\n");
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}