#include<stdio.h>

int main() {
	int a = 3;
	char* p = (a % 2 == 0 ? "¦��" : "Ȧ��");
	printf("%d�� %s", a, p);
	return 0;
}