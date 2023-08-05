#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int i = 0, sum = 0;
	while (1)
	{
		i++;
		if ((sum + i) > 1000)
			break;
		sum += i;

	}
	printf("1부터 %d까지의 합이 %d입니다.\n", i - 1, sum);
}