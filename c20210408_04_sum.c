#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//�Ű������� ������ �Է¹޾� �����ϴ� �Լ� 
//���������� ���������� �̸��� ������ ���������� �켱
//int sum = 0;
int userSum(int i) {

	//�Լ��� ���ʷ� ��������� ����, ���α׷� ����� �Ҹ�
	//����� �Լ� �ȿ����� ���ٰ���
	static int sum = 0;
	sum += i;
	return sum;
}

int countTest() {
	static int cnt = 0;
	

	return cnt++;
}
int main() {
	//��������, �������� ���
	for(int i = 0; i < 10; i++)
		printf("����Ƚ��: %2d \n", countTest()+1);
	//printf("sum = %d \n", userSum(10));
	//printf("sum = %d \n", userSum(210));
}