#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//
	int i = 0;
	int sum = 0;
	do {
		printf("정수를 입력하세요 : ");
		scanf("%d", &i);
		getchar();
		sum += i;
	} while (i != 0);
	printf("지금까지 더한 수는 %d입니다.", sum);

	return 0;
}
