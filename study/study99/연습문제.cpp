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
	printf("1���� %d������ ���� %d�Դϴ�.\n", i - 1, sum);
}