#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	double sum;

	printf("������ ���� n�� �Է��Ͻÿ�. : ");
	scanf("%d", &n);

	sum = 0;
	for (i = 2; i <= n; i++)  //�и��� 2���� n���� ���Ѵ�.
		sum = sum + ((double)(i-1)/i);

	//���� ����ϱ�
	for (i = 2; i <= n; i++)
		printf("%d/%d + ", i - 1, i);
	printf("\b\b= %.1lf\n", sum);

	return 0;
}