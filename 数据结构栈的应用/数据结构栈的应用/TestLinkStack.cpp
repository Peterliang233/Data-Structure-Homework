#include "head.h"

void PrintMenu2() {
	printf("��ӭ����ջ���в���\n");
	printf("1������ջ���в������\n");
	printf("2������ջ���е�������\n");
	printf("3���˳���ǰ����\n");
	printf("��ѡ��");
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
			printf("�����������������֣�");
			scanf("%d", &e);
			if (LinkStackPush(s, e)) {
				printf("����ɹ�\n");
			}
			else {
				printf("����ʧ��\n");
			}
		}
		if (ch == 2) {
			if (LinkStackPop(s, e)) {
				printf("�����ɹ�,����������Ϊ��%d\n", e);
			}
			else {
				printf("����ʧ��\n");
			}
		}
		if (ch == 3) {
			printf("��лʹ��\n");
			break;
		}
	}
}