#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SQ(x) ((x) * (x))

int main()
{
	int n, i, sum = 0;

	printf("n의 값을 입력하시오. : ");
	scanf("%d", &n);
	printf(">> ", sum);

	for (i = 1; i <= n; i++)
	{
		sum += SQ(i);
		printf("%d²+", i);
	}
	printf("\b = %d\n", sum);

	return 0;
}