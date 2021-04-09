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

	//문자형 배열
	//char arr[5] = {'j', 'a', 'v', 'a'};

	//for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
	//	printf("%c ", arr[i]);
	//}
	//return 0;

	//배열의 합
	//int arr[] = { 4, 5, 9, 12, 34 };
	//int sum = 0;

	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	sum += arr[i];
	//}
	//printf("%d", sum);

	//int arr[LEN]; int sum = 0;
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	printf("arr[%d]의 정수 입력: ", i);
	//	scanf("%d", &arr[i]);
	//	getchar();
	//}
	//printf("arr배열의 주소: %p\n", arr);
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	printf("arr[%d]의 값: %d 주소: %p\n", i, arr[i], &arr[i]);
	//}
	//for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
	//	sum += arr[i];
	//}
	//printf("%d \n", sum);

	//int arr[LEN]; int sum = 0; 
	//double avr = 0;
	//int num = 0;
	//int size = sizeof(arr)/sizeof(int);
	////전체입력 
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수 입력:", i+1);
	//	scanf("%d", &arr[i]);
	//	getchar();
	//}
	////전체 출력
	//for (int i = 0; i < size; i++) {
	//	printf("%d번 점수 : %d\n", i+1, arr[i]);
	//	sum += arr[i];
	//}
	////합계 평균
	//avr = (double)sum / size;
	//printf("sum = %d\tavrage = %.2f\n", sum, avr);
	//원하는 학생 입 출력

	//while(1){
	//	
	//	printf("원하는 학생 점수 출력 (0누르면 종료): ");
	//	scanf("%d", &num);
	//	if (num == 0) break;
	//	if ( !(num >= 1 && num <= LEN)) {
	//		printf("잘못된 번호입니다.\n");
	//		continue;
	//	}	
	//	printf("%d번의 점수 : %d\n", num, arr[num - 1]);
	//} 

	//do {
	//	printf("원하는 학생 점수 출력 (0누르면 종료): ");
	//	scanf("%d", &num);
	//	if ( num < 0 || num > LEN) {
	//		printf("잘못된 번호입니다.\n");
	//		continue;
	//	}
	//	else if(num != 0)
	//		printf("%d번의 점수 : %d\n", num, arr[num - 1]);
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
