#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

//매개변수: 카운다운 초
//리턴 x
//카운트다운을 출력하는게 목적

void countdown(int sec) {
	for (int i = sec; i > -1; i--) {
		Sleep(1000);
		printf("%d초\n", i);
	}
	printf("발사\n");
}
int main() {
	//for (int i = 5; i > -1; i--) {
	//	Sleep(1000);
	//	printf("%d초\n", i);
	//	
	//}
	//printf("발사\n");
	int second;
	printf("초 입력: ");
	scanf("%d", &second);
	countdown(second);
	return 0;
}