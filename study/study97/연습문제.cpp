#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i = 1, n;

	printf("����� 3�� ����� ������ : ");
	scanf("%d", &n);

	while (n--)
	{
		printf("%d ", i * 3);
		i++;
	}
}