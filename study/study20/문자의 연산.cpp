#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char lower, upper, char_num, num;

	printf("���ĺ� �ҹ��� �� ���� �Է��Ͻÿ�. ");
	lower = getchar();

	upper = 'A' + (lower - 'a');

	printf("�Է��� �ҹ��� %c�� �빮�ڴ� %c\n", lower, upper);

	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);

	printf("\n0~9 �� �� ���� �Է��ϼ���.");
	char_num = getchar();
	num = char_num - '0';

	printf("�Է��� ���� '%c'�� ���� %d�Դϴ�. \n", char_num, num);

	return 0;

}