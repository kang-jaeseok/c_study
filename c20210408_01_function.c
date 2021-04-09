#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void voidTest(){
	printf("void 함수\n");
}
void voidTest2(int a) {
	printf("매개변수: %d\n", a);
}
void voidTest3(int a, int b) {
	printf("매개변수 두수의 합: %d\n", a+b);
}
void area(double r) {
	double pi = 3.14;
	
	printf("원의 넓이는 %.2f\n", r * r * pi);
}
int sum(int a, int b, int c) {
	return a + b + c;
}
double divide(int a, int b) {
	return (double)a / b;
}
int max(int a, int b) {
	return a >= b ? a : b;
}
int main() {
	//voidTest();
	//voidTest2(10);
	//voidTest3(30, 20);
	//double r = 0;;
	//printf("원의 반지름 입력: ");
	//scanf("%lf", &r);
	
	//area(r);
	//printf("%d\n", sum(10, 20, 30));
	//printf("%.2f\n", divide(3, 2));
	//printf("%d \n", max(30, 30));
	return 0;

}