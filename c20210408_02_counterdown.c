#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

//�Ű�����: ī��ٿ� ��
//���� x
//ī��Ʈ�ٿ��� ����ϴ°� ����

void countdown(int sec) {
	for (int i = sec; i > -1; i--) {
		Sleep(1000);
		printf("%d��\n", i);
	}
	printf("�߻�\n");
}
int main() {
	//for (int i = 5; i > -1; i--) {
	//	Sleep(1000);
	//	printf("%d��\n", i);
	//	
	//}
	//printf("�߻�\n");
	int second;
	printf("�� �Է�: ");
	scanf("%d", &second);
	countdown(second);
	return 0;
}