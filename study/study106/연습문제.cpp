#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n;
	int f1 = 0;
	int f2 = 1;
	int f3, i;

	printf("피보나치 개수 입력  : ");
	scanf("%d", &n);
	if (n >= 2)
	{
		printf("\n*** 피보나치 수열 ***\n 0, 1 ");
		for (i = 0; i < n - 2; i++)
		{
			f3 = f1 + f2;
			printf(",%d ", f3);
			f1 = f2;
			f2 = f3;
		}
		printf("입니다\n");
	}
	else
		printf("2보다 작은 수를 입력했습니다\n");

	return 0;
}