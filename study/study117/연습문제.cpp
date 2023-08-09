#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(a,b,c) (((a=(a>b)?a:b) > c)? a : c)

int main()
{
	int a, b, c;

	printf("세 개의 수 : "); scanf("%d%d%d", &a, &b, &c);
	printf(">> 가장 큰 수 : %d\n", MAX(a, b, c));
	return 0;
}