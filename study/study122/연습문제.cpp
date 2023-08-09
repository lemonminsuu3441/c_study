#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER(x) printf("\t%4o\t%4d\t%4x\n", x, x, x);

void main()
{
	int x;

	printf("정수 입력 : ");
	scanf("%d", &x);

	printf(">> 결과 : 8진수\t10진수\t16진수\n");
	NUMBER(x);
}