#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	/*int n;
	printf("�ܼ���?");
	scanf("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);

	}*/

	/*int i, sum = 0;
	for (i = 0; i <= 100; i++) {
		sum += i;
	}
	printf("1���� 100������ ���� %d�Դϴ�.\n", sum);
	printf("1���� ����� �� �ұ��? : ");
	scanf("%d", &i);
	sum = 0;
	for(int j = 0 ; j <= i; j++){
		sum += j;
	}
	printf("1���� %d������ ���� %d�Դϴ�.", i, sum);
	return 0;*/

	//int i, n;
	//do {
	//	printf("�� ������ �Է��ϼ��� : ");
	//	scanf("%d %d", &i, &n);
	//	if (i >= n) printf("�� ������ ���� : %d\n", i - n);
	//	else printf("�� ������ ���� : %d\n", i - n);
	//	
	//} while (i != 0);

	//int a, b;

	//for (int i = 0; i < 10; i++) {
	//	
	//	printf("�� ������ �Է��ϼ��� : ");
	//	//scanf("%d %d", &a, &b);
	//	scanf("%d", &a);
	//	if (a == 0)	break;
	//	scanf("%d", &b);
	//	if (a >= b) printf("�� ������ ���� : %d\n", a - b);
	//	else printf("�� ������ ���� : %d\n", b - a);

	//	

	//}

	//for (int i = 0; i < 8; i++) {
	//	for (int j = 0; j < i+1; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//for (int i = 0; i < 8; i++) {
	//	for (int j = 8; j > i; j--) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//for (int i = 0; i < 8; i++) {
	//	for (int j = 8; j > i; j--) {
	//		printf(" ");
	//	}
	//	for (int k = 0; k < i+1; k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	//printf("\n");
	//for (int i = 0; i < 8; i++) {
	//	for (int j = 8; j > i; j--) {
	//		printf(" ");
	//	}
	//	for (int k = 0; k < (2*i+1); k++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//int a, b;
	//int sum = 0;
	//printf("�� ���� �Է�: ");
	//scanf("%d %d", &a, &b);

	//for (int i = a; i <= b; i++) {
	//	sum += i;
	//}
	//printf("%d���� %d������ �հ�� %d\n", a, b, sum);

	//int input;
	//printf("������ �Է��ϼ���: ");
	//scanf("%d", &input);
	//int factorial = 1;
	//for (int i = 1; i <= input; i++) {
	//	factorial *= i;
	//}
	//
	//printf("1���� %d���� ���� ���� %d", input, factorial);

	for (int i = 1; i <= 5; i++) {
		for (int j = 10; j >= 5; j--) {
			if (i + j == 10) {
				printf("(%d,%d)", i, j);
			}
		}
	}
	printf("\n");

	//char input;
	//
	//while (1)
	//{
	//	do
	//	{
	//		printf("1.«��, 2¥���, 3.�Ұ��, 4.�ܹ���, q.����: ");
	//		scanf("%c", &input);
	//		getchar();
	//	} while ((!(input == '1' || input == '2' || input == '3' || input == '4' || input == 'q')));

	//	if (input == 'q') {
	//		printf("����\n");
	//		break;
	//	}
	//	else if (input == '1') {
	//		printf("A�ڳʷ� ������\n");
	//	}
	//	else if (input == '2') {
	//		printf("B�ڳʷ� ������\n");
	//	}
	//	else if (input == '3') {
	//		printf("C�ڳʷ� ������\n");
	//	}
	//	else if (input == '4') {
	//		printf("D�ڳʷ� ������\n");
	//	}
	//}
}