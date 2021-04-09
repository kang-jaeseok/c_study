#include<stdio.h>

int main() {
	int a = 3;
	char* p = (a % 2 == 0 ? "Â¦¼ö" : "È¦¼ö");
	printf("%d´Â %s", a, p);
	return 0;
}