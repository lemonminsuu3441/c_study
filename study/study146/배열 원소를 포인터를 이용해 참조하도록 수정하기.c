#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define SIZE 5

int main()
{
	int quiz[SIZE];
	int i, count, sum;
	double ave;

	printf("%d���� ������ ������� �Է��Ͻÿ�. \n\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d���� ���� ������? ", i + 1);
		scanf("%d", (quiz + i));
	}

	sum = 0;
	for (i = 0; i < SIZE; i++)
	{
		sum = sum + *(quiz + i);
	}

	ave = (double)sum / SIZE;

	count = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (*(quiz + i) < ave)
		{
			count++;
		}
	}

	printf("\n����� ������ �ƹ�Ű�� ��������. \n");
	_getch();  // Ű����κ��� ���� �� ���� �Է¹޴´�. �Ͻ� �����ϴ� ȿ���� ������.

	printf("\n=========================\n");
	printf("���: %.1lf�� \n", ave);
	printf("��� �̸�: %d�� \n", count);
	printf("\n=========================\n");

	return 0;
}