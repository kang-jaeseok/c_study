#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//매개변수로 정수를 입력받아 누적하는 함수 
//지역변수와 전역변수의 이름이 같을시 지역변수가 우선
//int sum = 0;
int userSum(int i) {

	//함수가 최초로 실행됐을때 생성, 프로그램 종료시 소멸
	//선언된 함수 안에서만 접근가능
	static int sum = 0;
	sum += i;
	return sum;
}

int countTest() {
	static int cnt = 0;
	

	return cnt++;
}
int main() {
	//전역변수, 지역변수 사용
	for(int i = 0; i < 10; i++)
		printf("실행횟수: %2d \n", countTest()+1);
	//printf("sum = %d \n", userSum(10));
	//printf("sum = %d \n", userSum(210));
}