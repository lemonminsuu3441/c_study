#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int gender, married, army, plus, children;

	plus = 0;

	printf("���� (��:1, ��:2) ? ");
	scanf("%d", &gender);

	if(gender == 1)
	{
		printf("�� ���� (��:1, �ƴϿ�:2) ? ");
		scanf("%d", &army);

		if (army == 1)
		{
			plus++;

			printf("��ȥ (��:1, �ƴϿ�:2) ? ");
			scanf("%d", &married);

			if (married == 1)
			{
				plus++;
			}
		}
	}
	else
	{
		printf("��ȥ(��:1, �ƴϿ�:2) ? ");
		scanf("%d", &married);

		if (married == 1)
		{
			plus++;

			printf("�ڳ����? ");
			scanf("%d", &children);
			if(children == 1)
			{
				plus++;
			}
			else if (children >= 2)
			{
				plus += 2;
			}
		}
	}

	printf("\n>> �� �������� %d���Դϴ�.", plus);

	return 0;
}