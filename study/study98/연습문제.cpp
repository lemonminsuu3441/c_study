#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;
	float i;

	printf("�Է´����� cm�̸� 'c'�� 'C'��, inch�̸� 'i'�� 'I'�� �Է��ϼ���.\n");
	printf("�Է� ���� :"); scanf("%c", &ch);
	printf("�Է� �� :"); scanf("%f", &i);

	if (ch == 'c' || ch == 'C')
	{
		printf("\n�Է��� %.2f cm�� %.2f inch�Դϴ�.\n", i, i / 2.54);
	}
	else if (ch == 'i' || ch == 'I')
	{
		printf("\n�Է��� %.2f inch�� %.2f cm�Դϴ�.\n", i, i * 2.54);
	}
	else
	{
		printf("\n�Է� ������ i(I) �Ǵ� c(C)�� �Է��ϼ���,\n");
	}
}