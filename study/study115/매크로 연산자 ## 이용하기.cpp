#include <stdio.h>
#define DATE(Y, M, D)Y ## M ## D

int main()
{
	printf("������� : %d \n", DATE(11, 06, 10));
	printf("������� : %d \n", DATE(10, 11, 25));

	return 0;
}