#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num, thou, hun, ten, one;
	printf("���ڸ� ������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	thou = num / 1000;
	hun = num % 1000 / 100;
	ten = num % 100 / 10;
	one = num % 10;


	printf("�Է��� ���� %dõ%d��%d��%d�Դϴ�\n", thou, hun, ten, one);

	return 0;
}