#include <stdio.h>
#define SIZE 5

int main()
{
	int i, repeat, temp, a[SIZE] = { 5,4,3,2,1 };

	// ���� ���� ����
	for (repeat = 1; repeat < SIZE; repeat++)  // (�迭 ���Ҽ� - 1) �� �ݺ��ϱ�
	{
		// �迭�� �̿��� �� ���Ұ��� ������ ���ʴ�� �ݺ��ϱ�
		for (i = 0; i < SIZE - 1; i++)
		{
			// �̿� �� ������ ����
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[ i + 1 ] = temp;
			}
		}
	}

	return 0;
}