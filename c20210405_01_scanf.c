#define _CRT_SECURE_NO_WARNINGS // To use scanf //Macro define
#include<stdio.h>

int main(void) {
	
	////Integer Input
	//int a;
	//printf("Integer : ");
	////input function
	//scanf("%d", &a); // address of a variable3333333333333333333333333333333
	//
	////output function 
	//printf("Input : %d Address : %p\n", a, &a);


	////�Ǽ� �� �Է¹ޱ�
	//float f;
	//double d;
	//printf("Float : ");
	//
	//scanf("%f", &f);
	//printf("double : ");
	//scanf("%lf", &d); //double�� �Ǽ��� %lf 
	//printf("Input:\t\t%f %f\nAddress:\t%p %p\n", f, d, &f, &d);


	////���� �Է¹ޱ�
	//char c;
	//printf("character : ");
	//scanf("%c", &c);
	//printf("input value : %c\naddress : %p", c, &c);
	//return 0;

	//�ǽ�) �� ������ �Է¹޾Ƽ� �հ踦 ���

	//int a, b;
	//printf("#1) input : ");
	//scanf("%d", &a);
	//printf("#2) input : ");
	//scanf("%d", &b);
	//printf("%d + %d = %d \n", a, b, a + b);
	//int c, d;
	//printf("input : ");
	//scanf("%d %d", &c, &d);
	//printf("%d + %d = %d \n", c, d, c + d);

	//�ǽ�) ������ ��¥(��, ��, ��)�� �Է¹޾� ���
	
	//int year, month, day;
	//printf("������ ��¥(��, ��, ��) �Է�: ");
	//scanf("%d-%d-%d", &year, &month, &day);
	//printf("������ ��¥�� %4d��%2d��%2d�� \n", year, month, day);
	//return 0;

	//�ǽ�) �ΰ��� ������ �Է� �޾� ��� ������ ���� ���ÿ�

	//int a, b;
	//char c;
	//
	//printf("�� ������ �Է��Ͻÿ� : ");
	//scanf("%d %d", &a, &b);

	//printf("%2d + %2d = %2d \n", a, b, a + b);
	//printf("%2d - %2d = %2d \n", a, b, a - b);
	//printf("%2d * %2d = %2d \n", a, b, a * b);
	//printf("%2d / %2d = %.2f \n", a, b, (double)a / b); //���� �ϳ��� ����ȯ
	//printf("������ �Է��Ͻÿ� : ");


	//int a, b;
	//char c;

	//scanf("%d %c %d", &a, &c, &b);
	//printf("%d %c %d", a, c, b);

	//int a, b;
	//char c;
	//printf("first?");
	//scanf("%d", &a);
	//printf("second?");
	//scanf("%d", &b);
	////���͸� ó���ϱ� ���� �������� ���
	//char ch = getchar(); // �ѹ����� �о ��ȯ�ϴ� �Լ�
	//printf("sign?");
	//scanf("%c", &c);
	//

	//printf("%d %c %d", a, c, b);

	//int a, b;
	//printf("���� �ݾ� : ");
	//scanf("%d", &a);

	//printf("���� �ݾ� : ");
	//scanf("%d", &b);

	//a < b ? printf("�Ž������� : %d���Դϴ�. \n", b - a) :
	//a > b ? printf("���ڶ����� : %d���Դϴ�.\n", a - b) :
	//		printf("���ǰ��� ������ ���� ��ġ�մϴ�.\n");

	//�ǽ� ) �հ� ��� ���ϱ�
	//int korean, english, math;
	//int sum;
	//float avg;
	//printf("����, ����, ������ ���� �Է� : ");
	//scanf("%d %d %d", &korean, &english, &math);

	//sum = korean + english + math;
	//avg = (float)sum / 3;
	//printf("���� ���� ������ �հ� : %d\n", sum);
	//printf("��� : %.2f \n", avg);


	//rgb�� �����

	int r, g, b;
	printf("red ? "); scanf("%d", &r);
	printf("green ? "); scanf("%d", &g);
	printf("blue ? "); scanf("%d", &b);
	
	unsigned int rgb = r << 16 | g << 8 | b;
	
	
	printf("%0X\n", rgb);
		
}

