#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;

	printf("Ű(cm)�� �Է��Ͻÿ�.");
	scanf("%lf", &a);

	double b = a / 2.54;
	double c = b / 12;

	printf("�Է��Ͻ� Ű %.2lf%��Ƽ���ʹ� %.2lf��Ʈ�� %.2lf��ġ�� �ش�˴ϴ�.", a, c, b);

	return 0;

}