#include <stdio.h>
#define STUDENT 10		// �л���
#define N 10			// ���׼�
#define YES 1
#define NO 0

int main()
{
	// �л� STUDENT���� ���� ������� 2���� �迭�� �ʱ�ȭ�ϱ�
	int paper[STUDENT][N] = { {1, 3, 2, 3, 4, 2, 3, 1, 4, 3},
							{1, 2, 2, 2, 4, 2, 3, 1, 4, 2},
							{4, 3, 2, 3, 4, 2, 3, 1, 4, 2},
							{1, 3, 2, 2, 4, 3, 3, 4, 4, 2},
							{1, 3, 2, 3, 4, 2, 3, 3, 4, 1},
							{1, 1, 2, 4, 4, 3, 3, 2, 4, 3},
							{1, 3, 2, 3, 4, 2, 3, 1, 4, 2},
							{1, 3, 2, 3, 3, 2, 3, 1, 4, 2},
							{2, 3, 3, 3, 3, 2, 4, 1, 4, 2},
							{3, 4, 4, 2, 4, 1, 2, 1, 4, 2} };
	int answer[N] = { 1, 3, 2, 3, 4, 2, 3, 1, 4, 2 };			// ���� ���� ���� �迭
	int total[STUDENT] = { 0 }, id[STUDENT], rank[STUDENT];	// �� �л��� ����, ��ȣ, ����
	int i, j, u, std, pass, temp, swap;

	// �л��� ��ȣ�� id �迭�� �����ϱ�
	for (i = 0; i < STUDENT; i++)
	{
		id[i] = i + 1;
	}

	// �л����� �ڽ��� ��Ȱ� �������� ����� ���Ͽ� ä���� ����� ȭ�鿡 ǥ���ϱ�
	printf("\n\t �� ���׺� ä�� ��� �� \n");
	printf("=====================================================\n");
	printf(" ����");
	for (i = 0; i < N; i++)
		printf("%4d", i);
	printf("   ����");
	printf("\n=====================================================\n");

	//�л��� �����(paper[std])�� ������(anser �迭)�� ���Ͽ� ä���� ��� ����ϱ�
	for (std = 0; std < STUDENT; std++)
	{
		printf("%3d�� ", std + 1);

		for (i = 0; i < N; i++)
			if (paper[std][i] == answer[i])
			{
				total[std]++;
				printf("  ��");	// '��'+<����>Ű
			}
			else
				printf("  ��");

		printf(" %3d�� \n", total[std]);
	}
	printf("=====================================================\n");

	// ���� �����ϱ�: ���� ����	
	for (pass = 1; pass < STUDENT; pass++)
	{
		swap = NO;
		for (i = 0; i < STUDENT - pass; i++)
			if (total[i] < total[i + 1])
			{
				// ������ ��ȯ�ϱ�
				temp = total[i];
				total[i] = total[i + 1];
				total[i + 1] = temp;

				// ��ȣ�� ��ȯ�ϱ�
				temp = id[i];
				id[i] = id[i + 1];
				id[i + 1] = temp;

				swap = YES;
			}

		// �ѹ��� ��ȯ�� ���� ���ٸ� ������ �Ϸ�� ���̹Ƿ� ������
		if (swap == NO) break;
	}

	// ���� ���ϱ�: ������ ������ ���� �л��� + 1�� ������ ���ϴ� ���
	for (i = 0; i < STUDENT; i++)
	{
		rank[i] = 1;	// �̸� 1�� �ʱ�ȭ�Ѵٸ� 1�� ���� �ʿ䰡 ����
		for (u = 0; u < STUDENT; u++)
			if (total[i] < total[u])	// ���� ������ ������ �������� ���ٸ�
				rank[i]++;				// ���� ������ 1 ����			
	}

	/* ���� ���ϱ�: ������ ������ ����� Ȱ���Ͽ� ���� ���ϱ�, int j, next; ������ �ʿ�
	for (i=0; i<STUDENT; )
	{
		next=i+1;
		while (total[i]==total[next])	// �������� ���� ó��
			next++;

		for (j=i; j<next; j++)
			rank[j]=i+1;
		i=next;
	}
	*/

	// ��� ���
	printf("\n\t �� ���� �� ���� �� \n");
	printf("\t ===================\n");
	printf("\t  ��ȣ  ����  ���� \n");
	printf("\t ===================\n");
	for (i = 0; i < STUDENT; i++)
		printf("\t  %2d��  %2d�� %2d�� \n", id[i], total[i], rank[i]);
	printf("\t ===================\n\n");

	return 0;
}