#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//
	int i = 0;
	int sum = 0;
	do {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &i);
		getchar();
		sum += i;
	} while (i != 0);
	printf("���ݱ��� ���� ���� %d�Դϴ�.", sum);

	return 0;
}
