#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int n;
	int f1 = 0;
	int f2 = 1;
	int f3, i;

	printf("�Ǻ���ġ ���� �Է�  : ");
	scanf("%d", &n);
	if (n >= 2)
	{
		printf("\n*** �Ǻ���ġ ���� ***\n 0, 1 ");
		for (i = 0; i < n - 2; i++)
		{
			f3 = f1 + f2;
			printf(",%d ", f3);
			f1 = f2;
			f2 = f3;
		}
		printf("�Դϴ�\n");
	}
	else
		printf("2���� ���� ���� �Է��߽��ϴ�\n");

	return 0;
}