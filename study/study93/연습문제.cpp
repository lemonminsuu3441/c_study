#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int mon;

	printf("�� �Է� : ");
	scanf("%d", &mon);

	switch (mon)
	{
		case 1:
		case 2:
		case 3: printf(">> 1�б� �Դϴ�.\n"); break;
		case 4:
		case 5:
		case 6: printf(">> 2�б� �Դϴ�.\n"); break;
		case 7:
		case 8:
		case 9: printf(">> 3�б� �Դϴ�.\n"); break;
		case 10:
		case 11:
		case 12: printf(">> 4�б� �Գ���.\n"); break;
		default:printf("�߸��� ���� �Է��߽��ϴ�.\n");
	}
}