#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define LEN 5
int main() {
	//int arr[3];
	//arr[0] = 10; arr[1] = 20; arr[2] = 30;
	//
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = (i+1)*10;
	//}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d ", arr[i]);
	//}

	//double arr[3] = { 1.1, 2.1, 3.1 };
	//double arr[3];
	//int size = sizeof(arr) / sizeof(double);
	//for (int i = 0; i < 3; i++) {
	//	arr[i] = i + 1.1;
	//}
	//for (int i = 0; i < 3; i++) {
	//	printf("%.1f ", arr[i]);
	//}

	//������ �迭
	//char arr[5] = {'j', 'a', 'v', 'a'};

	//for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
	//	printf("%c ", arr[i]);
	//}
	//return 0;

	//�迭�� ��
	//int arr[] = { 4, 5, 9, 12, 34 };
	//int sum = 0;

	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	sum += arr[i];
	//}
	//printf("%d", sum);

	//int arr[LEN]; int sum = 0;
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	printf("arr[%d]�� ���� �Է�: ", i);
	//	scanf("%d", &arr[i]);
	//	getchar();
	//}
	//printf("arr�迭�� �ּ�: %p\n", arr);
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	printf("arr[%d]�� ��: %d �ּ�: %p\n", i, arr[i], &arr[i]);
	//}
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	sum += arr[i];
	//}
	//printf("%d \n", sum);

	//int arr[LEN]; int sum = 0; 
	//double avr = 0;
	//int num = 0;
	//int size = sizeof(arr)/sizeof(int);
	////��ü�Է� 
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ���� �Է�:", i+1);
	//	scanf("%d", &arr[i]);
	//	getchar();
	//}
	////��ü ���
	//for (int i = 0; i < size; i++) {
	//	printf("%d�� ���� : %d\n", i+1, arr[i]);
	//	sum += arr[i];
	//}
	////�հ� ���
	//avr = (double)sum / size;
	//printf("sum = %d\tavrage = %.2f\n", sum, avr);
	//���ϴ� �л� �� ���

	//while(1){
	//	
	//	printf("���ϴ� �л� ���� ��� (0������ ����): ");
	//	scanf("%d", &num);
	//	if (num == 0) break;
	//	if ( !(num >= 1 && num <= LEN)) {
	//		printf("�߸��� ��ȣ�Դϴ�.\n");
	//		continue;
	//	}	
	//	printf("%d���� ���� : %d\n", num, arr[num - 1]);
	//} 

	//do {
	//	printf("���ϴ� �л� ���� ��� (0������ ����): ");
	//	scanf("%d", &num);
	//	if ( num < 0 || num > LEN) {
	//		printf("�߸��� ��ȣ�Դϴ�.\n");
	//		continue;
	//	}
	//	else if(num != 0)
	//		printf("%d���� ���� : %d\n", num, arr[num - 1]);
	//} while (num != 0);

	int fibo[20];
	for (int i = 0; i < 20; i++) {
		if (i == 0 || i == 1) fibo[i] = i;
		else
			fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 0; i < 20; i++) {
		printf("%d ", fibo[i]);

	}

}
