#include <stdio.h>

int main()
{
	int i, count = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("12�� �� 30�ϱ��� �ִ� ����");
	for (i = 1; i <= 12; i++)
	{
		if (days[i] == 30)
		{
			printf("%3d,", i);
			count++;
		}
	}
	printf("\b �� %d���Դϴ�. \n", count);

	return 0;
}