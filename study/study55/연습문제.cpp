#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month;

	printf("��(1~12) �Է� : ");
	scanf("%d", &month);


	(month <= 6) ? printf(">> %d���� ��ݱ��Դϴ�.\n", month) : printf(">> %d���� �Ϲݱ��Դϴ�.\n", month);

	return 0;
}
