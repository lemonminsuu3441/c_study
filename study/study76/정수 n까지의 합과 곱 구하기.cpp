#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, sum, factorial;

	printf("1���� n������ �հ� ���� ���մϴ�. ���� n��? ");
	scanf("%d", &n);

	sum = 0;
	for (i = 1; i <= n; i++)
		sum = sum + i;

	factorial = 1;
	for (i = 1; i <= n; i++)
		factorial = factorial * i;

		printf("1���� %d������ ���� %d�Դϴ�. \n", n, sum);
		printf("1���� %d������ ���� %d�Դϴ�. \n", n, factorial);

	return 0;
}