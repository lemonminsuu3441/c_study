#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, f = 1;

	printf("숫자를 입력하시요. :");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		f *= i;
		printf("%d! = %d\n", n, f);
	
}