#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z;

	printf("�� ���� ������ �Է��Ͻÿ�. : ");
	scanf("%d %d", &x, &y);

	while (y != 0)
	{
		z = x % y;
		x = y;
		y = z;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);

	return 0;
}