#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//int num1, num2;
	//printf("�� ���� �Է� : ");
	//scanf("%d %d", &num1, &num2);

	//
	//if (num1 > num2) {
	//	printf("num1�� num2���� �� ũ��.");
	//}
	//else {
	//	printf("num1�� num2���� ũ�� �ʽ��ϴ�.");
	//}

	//int a = -10;

	//int a = -10;
	//if (a > 0) {
	//	printf("��� \n");
	//}
	//else if (a < 0){
	//	printf("���� \n");
	//}
	//else {
	//	printf("����� ������ �ƴ� \n");
	//}
	
	//�ǽ�) �������� �Է¹޾� ū���� ���(�μ��� ���� ���� �ִ�)

	//int num1, num2;
	//printf("�� ���� �Է� : ");
	//scanf("%d %d", &num1, &num2);

	//
	//if (num1 > num2) {
	//	printf("num1�� num2���� �� ũ��.\n");
	//}
	//else if (num2 > num1) {
	//	printf("num2�� num1���� �� ũ��.\n");
	//}
	//else{
	//	printf("����.\n");
	//}
	
	//int grade;
	//printf("���� ?");
	//scanf("%d", &grade);
	////if (!(grade >= 0 && grade <= 100)) printf("�Է°� ����\n");
	//if ( (grade > 100 ) || (grade < 0 )) printf("�Է°� ����\n");
	//else if (grade >= 90)	printf("A \n");
	//else if (grade >= 80)	printf("B \n");
	//else if (grade >= 70)	printf("C \n");
	//else if (grade >= 60)	printf("D \n");
	//else					printf("F \n");

	//int kor, eng, math;
	//printf("������ ���� �Է�:");
	//scanf("%d %d %d", &kor, &eng, &math);
	//int sum;
	//double avg;
	//if ((kor >= 60) && (eng >= 60) && (math >= 60)) {
	//	sum = kor + eng + math;
	//	printf("�հ�� %d\n", sum);
	//	avg = (double)sum / 3;
	//	printf("����� %.2f\n", avg);
	//}
	//else {
	//	printf("����\n");
	//}

	//int year;
	//printf("�⵵ �Է� :");
	//scanf("%d",&year);
	//
	///*if (year % 4 == 0) {
	//	if ((year % 100 != 0) || (year % 400 == 0)) {
	//		printf("����\n");
	//	}
	//	else {
	//		printf("���� �ƴ�\n");
	//	}
	//}*/

	//if ( (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ) {
	//	printf("����\n");
	//}
	//else {
	//	printf("���� �ƴ�\n");
	//}

	int menu;
	printf("1.�����, 2.«��, 3.������, 4.�����, 5.����, 6.���İ�Ƽ �޴��� �����ϼ��� ");
	scanf("%d", &menu);

	//if (menu == 1 || menu == 2) printf("�߽�\n");
	//else if (menu == 3 || menu == 4) printf("�ѽ�\n");
	//else if (menu == 5 || menu == 6) printf("���\n");
	//else printf("�޴� ����\n");

	switch (menu) {
	case 1: case 2:
		printf("�߽�\n");
		break;
	case 3: case 4:
		printf("�ѽ�\n");
		break;
	case 5: case 6:
		printf("���\n");
		break;
	
	}
	return 0;
}