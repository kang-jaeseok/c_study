#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	/*int arr[][3] = { {1,2,3},{4,5,6} };
	int *p = arr;
	for (int i = 0; i < 6; i++) {
		printf("%d ", *p++);
	}*/
	/*
	* 90 88 77
	* 89 99 88
	*/
	int score[][3] = { {90, 88 , 77}, {89, 99, 88} };
	int(*p)[3] = score;
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		//printf("%d %d %d\n", (*p)[0], (*p)[1], (*p)[2]);
		sum = (*p)[0] + (*p)[1] + (*p)[2];
		printf("Sum = %d\tAvg = %.2f\n", sum, (double)sum / 3);
		*p++;
	}
	//printf("%d %d\n", p, p + 1);
	return 0;
}