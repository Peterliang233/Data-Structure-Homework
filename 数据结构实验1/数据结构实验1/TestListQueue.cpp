#include "head.h"
void PrintSqQueue() {
	printf("��ӭ��ʹ�������н��д洢\n");
	printf("�����ѡ�����¹���\n");
	printf("1���������н�����Ӳ���\n");
	printf("2���������н��г��Ӳ���\n");
	printf("3���˳���ǰҳ�棬�ص����˵�\n");
}
void TestLinkQueue() {
	ListQueue* top, *rear;
	top = rear = InitListQueuePtr();
	while (1) {
		system("pause");
		system("cls");
		PrintSqQueue();
		printf("��ѡ��");
		int ch;
		scanf("%d", &ch);
		int e;
		switch (ch) {
		case 1:
			printf("�����������ӵ����֣�");
			scanf("%d", &e);
			rear=EnListQueue(rear, e);
			printf("��ӳɹ�\n");
			break;
		case 2:
			rear = DeListQueue(rear, top, e);
			printf("���ӳɹ������ӵ�����Ϊ��%d\n", e);
			break;
		case 3:
			return;
		}
	}
}