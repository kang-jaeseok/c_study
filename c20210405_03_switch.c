#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//int num;
	//printf("�� �Է�: ");
	//scanf("%d", &num);

	//switch (num) {
	//case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//	printf("31��\n");
	//	break;
	//case 4: case 6: case 9: case 11:
	//	printf("30��\n");
	//	break;
	//case 2:
	//	printf("30��\n");
	//	break;
	//default:
	//	printf("�߸��� ��\n");
	//	break;
	//}
	//

	int no;
	printf("1.�����,2.«��,3.������,4.�����,5.����,6.���İ�Ƽ ");
	printf("�޴��� ? :");
	scanf("%d", &no);

	switch (no) {
	case 1: case 2:
		printf("�߽�\n");
		break;
	case 3: case 4:
		printf("�ѽ�\n");
		break;
	case 5: case 6:
		printf("���\n");
		break;
	default:
		printf("�߸��� �Է�\n");
		break;
	}
	return 0;
}
