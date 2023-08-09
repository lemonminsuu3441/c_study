#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, n, cnt, sum;

	sum = 0;
	cnt = 1;
	for (i = 1; cnt <= 5; i++)
	{
		printf("\n양의 정수 n을 입력하시요. ");
		scanf("%d", &n);

		if (n <= 0)
			continue;

		cnt++;
		printf("지금까지의 합 %2d + %2d = ", sum, n);
		sum += n;
		printf("%2d \n", sum);
	}

	return 0;
}