#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5  //�迭 ���Ҽ� 5�� ��ũ�� ��� SIZE�� ����

int main()
{
	int quiz[SIZE];  // ���� SIZE���� ������ �迭 ����
	int i, count, sum;
	double avg;

	// �迭�� �Է�
	printf("%d���� ������ ������� �Է��Ͻÿ�. \n\n", SIZE);
	for (i = 0; i < SIZE; i++)
	{
		printf("%d���� ���� ������? ", i + 1);
		scanf("%d", &quiz[i]);
	}

	// �迭 ��� ���ϱ�
	sum = 0;
	for (i = 0; i < SIZE; i++)
	{
		sum += quiz[i];
	}

	avg = (double)sum / SIZE;

	// ��� �̸��� �� ���ϱ�
	count = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (quiz[i] < avg)
			count++;
	}

	// ��� ���
	printf("================================\n");
	printf(" ��ȣ  ����  ��հ��� ����      \n");
	printf("================================\n");
	for(i=0; i<SIZE; i++)
		printf("  %2d  %2d    %5.1lf\n", i+1, quiz[i], quiz[i]-avg);
	printf("================================\n");
	printf("��� : %.1lf�� \n", avg);
	printf("================================\n");
	printf("��� �̸� : %d�� \n", count);

	return 0;
}