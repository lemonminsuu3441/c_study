#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i, f = 1;

	printf("���ڸ� �Է��Ͻÿ�. :");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		f *= i;
		printf("%d! = %d\n", n, f);
	
}