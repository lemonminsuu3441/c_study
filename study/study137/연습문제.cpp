#include <stdio.h>
#define N 10

int main()
{
	int freeze[N] = { 15, 0, -20, -30, 50, -5, -120, -5, 10, -12 };
	int i, max;
	int index;			// �ִ뿡 �ش��ϴ� ������ ÷�ڸ� ������ ����

	max = freeze[0];	// �ִ�ġ�� �ʱⰪ�� ù ������ ������ ����
	index = 0;			// ù �ʱⰪ�� ÷�� ������ ����
	for (i = 1; i < N; i++)
	{
		if (max < freeze[i])
		{
			max = freeze[i];
			index = i;	// max�� ���� freeze[i]�� ����Ǿ����Ƿ�
			// index�� �ٲ� ���� �迭 ���� ÷�� �� i�� ������
		}
	}

	printf(" ��� �� ��� : ");
	for (i = 0; i < N; i++)
		printf("%d  ", freeze[i]);
	printf("\n ���� ���� ��� �� : freeze[%d] = %d \n", index, max);

	return 0;
}