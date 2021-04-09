#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	//int num1, num2;
	//printf("두 정수 입력 : ");
	//scanf("%d %d", &num1, &num2);

	//
	//if (num1 > num2) {
	//	printf("num1이 num2보다 더 크다.");
	//}
	//else {
	//	printf("num1이 num2보다 크지 않습니다.");
	//}

	//int a = -10;

	//int a = -10;
	//if (a > 0) {
	//	printf("양수 \n");
	//}
	//else if (a < 0){
	//	printf("음수 \n");
	//}
	//else {
	//	printf("양수도 음수도 아님 \n");
	//}
	
	//실습) 두정수를 입력받아 큰수를 출력(두수는 같을 수도 있다)

	//int num1, num2;
	//printf("두 정수 입력 : ");
	//scanf("%d %d", &num1, &num2);

	//
	//if (num1 > num2) {
	//	printf("num1이 num2보다 더 크다.\n");
	//}
	//else if (num2 > num1) {
	//	printf("num2가 num1보다 더 크다.\n");
	//}
	//else{
	//	printf("같다.\n");
	//}
	
	//int grade;
	//printf("점수 ?");
	//scanf("%d", &grade);
	////if (!(grade >= 0 && grade <= 100)) printf("입력값 오류\n");
	//if ( (grade > 100 ) || (grade < 0 )) printf("입력값 오류\n");
	//else if (grade >= 90)	printf("A \n");
	//else if (grade >= 80)	printf("B \n");
	//else if (grade >= 70)	printf("C \n");
	//else if (grade >= 60)	printf("D \n");
	//else					printf("F \n");

	//int kor, eng, math;
	//printf("국영수 점수 입력:");
	//scanf("%d %d %d", &kor, &eng, &math);
	//int sum;
	//double avg;
	//if ((kor >= 60) && (eng >= 60) && (math >= 60)) {
	//	sum = kor + eng + math;
	//	printf("합계는 %d\n", sum);
	//	avg = (double)sum / 3;
	//	printf("평균은 %.2f\n", avg);
	//}
	//else {
	//	printf("과락\n");
	//}

	//int year;
	//printf("년도 입력 :");
	//scanf("%d",&year);
	//
	///*if (year % 4 == 0) {
	//	if ((year % 100 != 0) || (year % 400 == 0)) {
	//		printf("윤년\n");
	//	}
	//	else {
	//		printf("윤년 아님\n");
	//	}
	//}*/

	//if ( (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) ) {
	//	printf("윤년\n");
	//}
	//else {
	//	printf("윤년 아님\n");
	//}

	int menu;
	printf("1.자장면, 2.짬뽕, 3.설렁탕, 4.비빔밥, 5.피자, 6.스파게티 메뉴를 선택하세요 ");
	scanf("%d", &menu);

	//if (menu == 1 || menu == 2) printf("중식\n");
	//else if (menu == 3 || menu == 4) printf("한식\n");
	//else if (menu == 5 || menu == 6) printf("양식\n");
	//else printf("메뉴 없음\n");

	switch (menu) {
	case 1: case 2:
		printf("중식\n");
		break;
	case 3: case 4:
		printf("한식\n");
		break;
	case 5: case 6:
		printf("양식\n");
		break;
	
	}
	return 0;
}