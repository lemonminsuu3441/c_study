#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x;

	printf("정수 입력 >> ");
	scanf("%d", &x);

	(x % 2 == 0) ? printf("%d는 짝수 입니다.\n", x) :
		printf("%d는 홀수 입니다.\n", x);

	return 0;
}