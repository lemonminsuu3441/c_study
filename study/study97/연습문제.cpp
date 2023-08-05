#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i = 1, n;

	printf("출력할 3의 배수의 개수는 : ");
	scanf("%d", &n);

	while (n--)
	{
		printf("%d ", i * 3);
		i++;
	}
}