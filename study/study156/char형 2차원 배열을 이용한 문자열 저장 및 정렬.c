#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 5

int main()
{
	char silver[SIZE][10] = { "������", "������", "���ǿ�", "������" };
	char temp[10];  // ���ڿ� �Ѱ��� �ӽ÷� ������ �迭
	int pass, i;

	printf("** ���޴� ����Ʈ : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%s, ", silver[i]);
	}
	printf("\b\b ** \n\n");

	// ���� ������ �̿��Ͽ� �̸��� �����ټ����� �����ϱ�
	for (pass=1; pass < SIZE; pass++)
	{
		for (i = 0; i < SIZE; i++)
		{
			if (strcmp(silver[i], silver[i + 1]) > 0)
			{
				strcpy(temp, silver[i]);
				strcpy(silver[i], silver[i + 1]);
				strcpy(silver[i + 1], temp);
			}
		}
	}
	printf("** ������ ����Ʈ : ");
	for (i = 0; i < SIZE; i++)
	{
		printf("%s, ", silver[i]);
	}
	printf("\b\b **\n\n");

	return 0;
}