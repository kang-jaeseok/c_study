#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	/*int n;
	printf("단수는?");
	scanf("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);

	}*/

	/*int i, sum = 0;
	for (i = 0; i <= 100; i++) {
		sum += i;
	}
	printf("1부터 100까지의 합은 %d입니다.\n", sum);
	printf("1부터 몇까지 더 할까요? : ");
	scanf("%d", &i);
	sum = 0;
	for(int j = 0 ; j <= i; j++){
		sum += j;
	}
	printf("1부터 %d까지의 합은 %d입니다.", i, sum);
	return 0;*/

	//int i, n;
	//do {
	//	printf("두 정수를 입력하세요 : ");
	//	scanf("%d %d", &i, &n);
	//	if (i >= n) printf("두 정수의 차는 : %d\n", i - n);
	//	else printf("두 정수의 차는 : %d\n", i - n);
	//	
	//} while (i != 0);

	//int a, b;

	//for (int i = 0; i < 10; i++) {
	//	
	//	printf("두 정수를 입력하세요 : ");
	//	//scanf("%d %d", &a, &b);
	//	scanf("%d", &a);
	//	if (a == 0)	break;
	//	scanf("%d", &b);
	//	if (a >= b) printf("두 정수의 차는 : %d\n", a - b);
	//	else printf("두 정수의 차는 : %d\n", b - a);

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
	//printf("두 정수 입력: ");
	//scanf("%d %d", &a, &b);

	//for (int i = a; i <= b; i++) {
	//	sum += i;
	//}
	//printf("%d부터 %d까지의 합계는 %d\n", a, b, sum);

	//int input;
	//printf("정수를 입력하세요: ");
	//scanf("%d", &input);
	//int factorial = 1;
	//for (int i = 1; i <= input; i++) {
	//	factorial *= i;
	//}
	//
	//printf("1부터 %d까지 곱한 값은 %d", input, factorial);

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
	//		printf("1.짬뽕, 2짜장면, 3.불고기, 4.햄버거, q.종료: ");
	//		scanf("%c", &input);
	//		getchar();
	//	} while ((!(input == '1' || input == '2' || input == '3' || input == '4' || input == 'q')));

	//	if (input == 'q') {
	//		printf("종료\n");
	//		break;
	//	}
	//	else if (input == '1') {
	//		printf("A코너로 가세요\n");
	//	}
	//	else if (input == '2') {
	//		printf("B코너로 가세요\n");
	//	}
	//	else if (input == '3') {
	//		printf("C코너로 가세요\n");
	//	}
	//	else if (input == '4') {
	//		printf("D코너로 가세요\n");
	//	}
	//}
}