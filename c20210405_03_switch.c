#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//int num;
	//printf("월 입력: ");
	//scanf("%d", &num);

	//switch (num) {
	//case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//	printf("31일\n");
	//	break;
	//case 4: case 6: case 9: case 11:
	//	printf("30일\n");
	//	break;
	//case 2:
	//	printf("30일\n");
	//	break;
	//default:
	//	printf("잘못된 월\n");
	//	break;
	//}
	//

	int no;
	printf("1.자장면,2.짬뽕,3.설렁탕,4.비빔밥,5.피자,6.스파게티 ");
	printf("메뉴는 ? :");
	scanf("%d", &no);

	switch (no) {
	case 1: case 2:
		printf("중식\n");
		break;
	case 3: case 4:
		printf("한식\n");
		break;
	case 5: case 6:
		printf("양식\n");
		break;
	default:
		printf("잘못된 입력\n");
		break;
	}
	return 0;
}
