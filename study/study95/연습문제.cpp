#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int su, n;
	printf("�� �Է�  : ");
	scanf("%d", &su);
	printf("����(1,2,3)  : ");
	scanf("%d", &n);
	switch (n)
	{
	case  1: printf("�Է��� ����  %d�Դϴ�.\n", su); break;
	case  2: printf("�Է��� ��%d�� 2����� %d�Դϴ�.\n", su, su * n); break;
	case  3: printf("�Է��� ��%d�� 3�����  %d�Դϴ�.\n", su, su * n); break;
	default: printf("=== �߸��� �Է��Դϴ� ===\n");
	}
}