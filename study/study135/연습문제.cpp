#include <stdio.h>

int main()
{
	int i, count = 0;
	int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("12달 중 30일까지 있는 달은");
	for (i = 1; i <= 12; i++)
	{
		if (days[i] == 30)
		{
			printf("%3d,", i);
			count++;
		}
	}
	printf("\b 총 %d달입니다. \n", count);

	return 0;
}