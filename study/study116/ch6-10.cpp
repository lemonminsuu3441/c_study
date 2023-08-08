#define _CRT_SECURE_NO_WARNINGS
#include "ch6-9.h"
#include <stdio.h>

int main()
{
	int n;

	printf("입력 : ");
	scanf("%d", &n);

	printf("%d의 제곱 = %d, %d의 세제곱 = %d\n", n, SQUARE(n), n, CUBE(n));

	return 0;
}