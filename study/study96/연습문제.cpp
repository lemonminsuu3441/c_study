#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i, n, prime = 1;

	printf("���� ���� n : "); scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			prime = 0;
			break;
		}
	}

	if (prime == 0)
		printf(">> %d��(��) �Ҽ��� �ƴմϴ�\n", n);
	else
		printf(">> %d��(��) �Ҽ��ϴ�\n", n);
}