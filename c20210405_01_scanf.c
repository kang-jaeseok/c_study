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


	////실수 형 입력받기
	//float f;
	//double d;
	//printf("Float : ");
	//
	//scanf("%f", &f);
	//printf("double : ");
	//scanf("%lf", &d); //double형 실수는 %lf 
	//printf("Input:\t\t%f %f\nAddress:\t%p %p\n", f, d, &f, &d);


	////문자 입력받기
	//char c;
	//printf("character : ");
	//scanf("%c", &c);
	//printf("input value : %c\naddress : %p", c, &c);
	//return 0;

	//실습) 두 정수를 입력받아서 합계를 출력

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

	//실습) 오늘의 날짜(년, 월, 일)를 입력받아 출력
	
	//int year, month, day;
	//printf("오늘의 날짜(년, 월, 일) 입력: ");
	//scanf("%d-%d-%d", &year, &month, &day);
	//printf("오늘의 날짜는 %4d년%2d월%2d일 \n", year, month, day);
	//return 0;

	//실습) 두개의 정수를 입력 받아 산술 연산을 구해 보시오

	//int a, b;
	//char c;
	//
	//printf("두 정수를 입력하시오 : ");
	//scanf("%d %d", &a, &b);

	//printf("%2d + %2d = %2d \n", a, b, a + b);
	//printf("%2d - %2d = %2d \n", a, b, a - b);
	//printf("%2d * %2d = %2d \n", a, b, a * b);
	//printf("%2d / %2d = %.2f \n", a, b, (double)a / b); //둘중 하나만 형변환
	//printf("계산식을 입력하시오 : ");


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
	////엔터를 처리하기 위한 목적으로 사용
	//char ch = getchar(); // 한문자을 읽어서 반환하는 함수
	//printf("sign?");
	//scanf("%c", &c);
	//

	//printf("%d %c %d", a, c, b);

	//int a, b;
	//printf("물건 금액 : ");
	//scanf("%d", &a);

	//printf("지불 금액 : ");
	//scanf("%d", &b);

	//a < b ? printf("거스름돈은 : %d원입니다. \n", b - a) :
	//a > b ? printf("모자란돈은 : %d원입니다.\n", a - b) :
	//		printf("물건값과 지불한 돈이 일치합니다.\n");

	//실습 ) 합계 평균 구하기
	//int korean, english, math;
	//int sum;
	//float avg;
	//printf("국어, 영어, 수학의 점수 입력 : ");
	//scanf("%d %d %d", &korean, &english, &math);

	//sum = korean + english + math;
	//avg = (float)sum / 3;
	//printf("국어 영어 수학의 합계 : %d\n", sum);
	//printf("평균 : %.2f \n", avg);


	//rgb값 만들기

	int r, g, b;
	printf("red ? "); scanf("%d", &r);
	printf("green ? "); scanf("%d", &g);
	printf("blue ? "); scanf("%d", &b);
	
	unsigned int rgb = r << 16 | g << 8 | b;
	
	
	printf("%0X\n", rgb);
		
}

