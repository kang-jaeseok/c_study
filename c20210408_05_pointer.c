#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//int a = 10;
	//int* p = &a;
	//printf("a: %d\t%p\n", a, &a);
	//printf("p: %d\t%p\n", *p, p);
	//char c = '%';
	//char* p2 = &c;
	//printf("%c ", *p2);

	//double d = 3.14;
	//double* p3 = &d;
	//printf("%.2f ", *p3);

	//float f = 5.55l;
	//float* p4 = &f;
	//printf("%.2f ", *p4);

	//int a = 10, b = 20;
	//int* p;
	//p = &a;
	//printf("a: %d \n", *p);
	//p = &b;
	//printf("b: %d \n", *p);

	//int a = 10, b = 20, c = 30;
	//int base = 100;
	//int* p = &a;
	//*p += base;
	//printf("a: %d \n", *p);

	//p = &b;
	//*p += base;
	//printf("b: %d \n", *p);

	//p = &c;
	//*p += base;
	//printf("c: %d \n", *p);

	//배열의 포인터

	//int arr[3] = { 10, 20, 30 };
	////배열의 이름은 주소
	//int* p = arr;
	//
	////for (int i = 0; i < 3; i++) {
	////	printf("%d %d %d %d\n", *(p + i), *(arr+i), arr[i], p[i]);

	////}

	//for (int i = 0; i < 3; i++) {
	//	printf("%d \n", *p++);
	//	
	//}

	//char str[7] = { 'p','y','t','h','o','n' };

	//char* p = str;

	//for (int i = 0; i < 7; i++) {

	//	printf("%c ", *p++);
	//}
	/*int fibo[20];
	int* p;
	p = fibo;
	for (int i = 0; i < 20; i++) {
		if (i == 0 || i == 1) *(p+i) = i;
		else
			*(p + i) = *(p + i - 1) + *(p + i - 2);
	}

	for (int i = 0; i < 20; i++) {
		printf("%d ", *(p++));
	}*/

	int fibo[20];
	int* p = fibo;
	*p = 0; p++;
	*p = 1; p++;

	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		*p++;
	}
	p = fibo;
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		*p++;
		
	}

}