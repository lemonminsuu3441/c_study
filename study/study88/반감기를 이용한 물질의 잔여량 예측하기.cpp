#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int half = 14;  //���� �ݰ���
	int days, n;
	double amount = 100;  //���� ���� ��

	printf("���� ���� ���� %6.1lfmg�Դϴ�. \n\n", amount);
	printf("��ĥ° �Ǵ� ���� ���� �ּ� �ܷ��� ���ұ��? ");
	scanf("%d", &n);

	days = 0;
	while (1)  // ���� ������ ó��
	{
		//���ο� �ݰ��Ⱑ ������ ���� ������ �پ���.
		days += half;  // �����Ϸκ��� ������ ���� �ݰ��⸸ŭ �����ϱ�
		amount = amount / 2;  //�ݰ����� half���� ������ ���� ������ �پ���.
		printf("%2d�ϱ����� ���� �ּ� �ܷ��� %6.1lfmg �̻� \n", days, amount);

		if (days >= n)  // ����ڰ� �Է��� ���� �����ٸ� �ݺ��� ������
			break;
	}

	printf("\n>>�׷��Ƿ� %2d�� °���� %6.1lfmg �̻� �����ֽ��ϴ�.\n", n, amount);

	return 0;
}