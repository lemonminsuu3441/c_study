#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i, month, sum = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("1������ �� �������� ������ ���ұ��? ");
	scanf("%d", &month);

	for (i = 1; i <= month; i++)
	{
		sum += days[i];
	}
	printf("1������ %d�������� �� %d���� �ֽ��ϴ�.\n", month, sum);

	return 0;
}