#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i; // ��м�
	double dx, a, b, x, y, integral = 0.0;

	printf("���� ���� ������? ");
	scanf("%lf", &a);
	printf("���� ���� ����? ");
	scanf("%lf", &b);
	printf("n(���� ������ ����)��? ");
	scanf("%d", &n);

	dx = (b - a) / n;  // �簢���� �غ��� ����
	for (x = a, i = 1; i <= n; i++) // n���� �簢�� ������ �� ���ϱ�
	{
		y = x * x;		// �ش� x ��ǥ������ �Լ� ��(�簢�� ����)
		integral += y * dx;	// ���� �簢�� ����(�غ�*����)�� �ٻ�ġ�� ����
		x = x + dx;		// x ��ǥ�� dx��ŭ ����
	}
	printf("\nf(x) = x���� [%.1lf, %.1lf] ������ ���� �ٻ�ġ�� %.3lf�Դϴ�.\n", a, b, integral);

	return 0;
}