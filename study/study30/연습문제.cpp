#define _CRT_SECURE_NO_WARNINGS
#include <STDIO.H>

int main()
{
	int a;
	double h, j, k;
	double pi = 3.141592;

	printf("������(cm)���Է��ϼ���.");
	scanf("%d", &a);

	h = 2 * pi * a;
	j = pi * a * a;
	k = pi * a * a * a * 4 / 3;

	printf("�ѷ�= %7.2lfcm\n", h);
	printf("����= %7.2lfcm\n", j);
	printf("����= %7.2lfcm\n", k);

	return 0;
}