#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, sum;

	while (1)
	{
		printf("정수 n을 입력(종료:-1): ");
		scanf("%d", &n);

		if (n == -1)
			break;

		sum = 0;
		for (i = 1; i <= n; i++)
			sum += i;
		printf("정수 1에서 %d까지의 합은 %d입니다.\n\n", n, sum);
	}
	printf("프로그램을 끝냅니다. \n");

	return 0;
}