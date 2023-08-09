#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n = 2, i, max, prime;

	printf("최대 몇까지의 소수를 출력? "); scanf("%d", &max);

	while (n < max)
	{
		prime = 1;
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime == 1)
			printf("%d ", n);
		n++;
	}
}