#include "head.h"
void PrintLinkQueue() {
	printf("��ӭ��ʹ��ѭ�����н��д洢\n");
	printf("�����ѡ�����¹���\n");
	printf("1����ѭ�����н�����Ӳ���\n");
	printf("2����ѭ�����н��г��Ӳ���\n");
	printf("3���˳���ǰҳ�棬�ص����˵�\n");
}
void TestSqQueue() {
	SqQueue Q;
	InitSqQueue(Q);
	while (1) {
		system("pause");
		system("cls");
		PrintLinkQueue();
		printf("��ѡ��");
		int ch;
		scanf("%d", &ch);
		int e;
		switch (ch) {
		case 1:
			printf("������������ӵ�����:");
			scanf("%d", &e);
			if (EnQueue(Q, e) == true) {
				printf("��ӳɹ�\n");
			}
			else {
				printf("���ʧ��\n");
			}
			break;
		case 2:
			if (DeQueue(Q, e) == true)
				printf("���ӳɹ�,���ӵ�����Ϊ��%d\n", e);
			else
				printf("����ʧ��\n");
			break;
		case 3:
			return;
		}
	}
}