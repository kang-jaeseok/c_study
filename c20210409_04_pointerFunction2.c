#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void arrayPoint(int argc, char* argv[])
void arrayPoint(int argc, char** argv) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", *argv);
		argv++;
		//printf("%s\n", argv[i]);
	}
}
int main() {
	char *p[3] = { "python", "c", "java" };
	//printf("%d %d %d\n", p[0], p[1], p[2]);

	//char str[][8] = { "python", "c", "java" };
	//char(* p)[7] = str;

	/*for (int i = 0; i < 3; i++) {
		printf("%s\n", p[i]);
	}*/

	arrayPoint(3, p);
}