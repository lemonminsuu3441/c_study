#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r, h;
	double pi = 3.141592;
	printf("������� �ظ��� ������, ���̸� �Է��ϼ���(cm����) : ");
	scanf("%d, %d", &r, &h);

	double x = pi * r * r * h;
	
	printf(">> ����� ������� ���Ǵ� %.1lfcm���Դϴ�.\n",x);

	return 0;
}