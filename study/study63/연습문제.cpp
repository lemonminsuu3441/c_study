#include <stdio.h>
int main()
{
	int year;
	printf("�⵵�� �Է��Ͻÿ� : ");
	scanf("%d", &year);

	printf("%s\n", (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? "����" : "���");

	return 0;

}