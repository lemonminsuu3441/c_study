#include <stdio.h>
int main()
{
	int year;
	printf("년도를 입력하시오 : ");
	scanf("%d", &year);

	printf("%s\n", (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "윤년" : "평년");

	return 0;

}