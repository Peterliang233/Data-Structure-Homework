#include "head.h"

void PrintMenu1() {
	printf("��лʹ��˳��ջ\n");
	printf("1����˳��ջ������Ӳ���\n");
	printf("2����˳��ջ���е�������\n");
	printf("3���˳���ǰ����\n");
	printf("��ѡ��");
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
			printf("��ѡ������ѹջ�����֣�");
			scanf("%d", &e);
			if (SqStackPush(s, e)) {
				printf("ѹջ�ɹ�\n");
			}
			else {
				printf("ѹջʧ��\n");
			}
		}
		if (ch == 2) {
			if (SqStackPop(s, e)) {
				printf("��ջ�ɹ�����ջ������Ϊ��%d\n", e);
			}
			else {
				printf("��ջʧ��\n");
			}
		}
		if (ch == 3) {
			break;
		}
	}
}