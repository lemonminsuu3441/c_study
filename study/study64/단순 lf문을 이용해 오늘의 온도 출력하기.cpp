#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int temp;

	printf("���� �µ���? ");
	scanf("%d", &temp);  // temp�� �µ�  �Է��ϱ�

	if (temp < 0)
	{
		printf("������ �����̸� ");
	}

		printf("���� �µ��� %d���Դϴ�.\n", temp);

		return 0;
}