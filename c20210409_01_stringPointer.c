#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//char str[] = "happy";
	//char* p = str;
	//printf("%s\n", p);
	//p = "python";

	char str[100];
	char* p = str;
	
	gets_s(p,100);
	puts(p);
//	scanf("%s", pa);
//	printf("%s", pa);
}