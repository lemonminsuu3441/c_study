#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char university[11], name[10]; // ���ڿ��� ������ �迭
	char std_no[9];

	// ������� ������ �迭
	printf("�б�����? ");
	scanf("%s", university);
	printf("�й���? ");
	scanf("%s", std_no);
	getchar();
	printf("�̸���? ");
	fgets(name, sizeof(name), stdin); // �� ĭ�� ���Ե� �̸��� �Է¹��� �� �ֵ��� gets �Լ��� �̿�
	
	printf("========================================\n");
	printf("%s %c%c�й� %s \n", university, std_no[2], std_no[3], name);
	printf("========================================\n");

	return 0;
}