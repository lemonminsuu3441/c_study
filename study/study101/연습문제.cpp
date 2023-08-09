#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int i, n, sum = 0;
	printf("제곱의 합을 구할 n을 입력 : "); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += i * i;

	}
	printf("1부터 %d까지의 제곱의 합은 %d입니다.\n", n, sum);
}