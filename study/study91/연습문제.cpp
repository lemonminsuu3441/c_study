#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	char ch;
	printf("���� �Է� : ");
	scanf("%c", &ch);
	if (ch >= '0' && ch <= '9')
		printf("�����Դϴ�");
	else if (ch >= 'A' && ch <= 'Z')
		printf("���ĺ� �빮���Դϴ�");
	else if (ch >= 'a' && ch <= 'z')
		printf("���ĺ� �ҹ����Դϴ�");
	else
		printf("���ڵ� ���ĺ� ���ڵ� �ƴմϴ�");
}