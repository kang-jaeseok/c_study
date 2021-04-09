#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void change(int *p) {
	*p = 20;
}

void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a =  *b;
	*b = tmp;

}

void sumCal(int* p, int* s) {

	*s += *p;

}
int main() {
	//	int a=10;
	////	int* p = &a;
	//	change(&a);
	//	printf("a:%d\n", a);

		//int a = 10, b = 20;
		//swap(&a, &b);
		//printf("%d %d", a, b);

	int a, sum = 0, i = 0;
	while (i < 10) { 

		scanf("%d", &a);
		sumCal(&a, &sum);
		i++;
	}
	printf("%d\n", sum);
		
	
}