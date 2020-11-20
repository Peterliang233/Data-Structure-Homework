#include "head.h"

using namespace std;
void PrintMenu() {
	printf("请选择你想进行测试的栈的类型\n");
	printf("1、对顺序栈进行测试\n");
	printf("2、对链栈进行测试\n");
	printf("3、退出整个程序\n");
	printf("请选择：");
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
			printf("感谢使用!^_^\n");
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}