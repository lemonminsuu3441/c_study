#include <stdio.h>
#define AND &
#define OR |
#define XOR ^
#define NOT ~

int main()
{
	int x = 5, y = 6;

	printf("x & y = %d \n", x AND y);
	printf("x | y = %d \n", x OR y);
	printf("x ^ y = %d \n", x XOR y);
	printf("~x = %d \n", NOT x);

	return 0;
}