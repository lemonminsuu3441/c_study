#include <stdio.h>
#define SIZE 5

int main()
{
	int i, repeat, temp, b[SIZE] = { 1,2,3,4,5 };
	char swap;  //�̿� �� ������ ���� ��ȯ�� ���� �ִ� ���� �˷��ִ� ����

	// ���� ���� ����
	for (repeat = 1; repeat < SIZE; repeat++)
	{
		swap = 'N'; // �� ���� ���� ��ȯ�� �߻����� ���� ���·� �ʱ�ȭ
		for (i = 0; i < SIZE - 1; i++)
		{
			if (b[i] > b[i + 1])
			{
				temp = b[i];
				b[i] = b[i + 1];
				b[i + 1] = temp;

				swap = 'Y';
			}
		}
		if (swap == 'N')  // �� ���� ���� ��ȯ�� �߻��� ���� ���� ���� �Ϸ� ���¶��
			break;  // ���� �۾��� ������
	}

	// ���ĵ� ����� ����ϱ�
	printf("\n\n ���� �� �迭: ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", b[i]);
	printf("\n");

	return 0;
}