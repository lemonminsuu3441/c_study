#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kor, music;
	double ave;

	printf("���� ���� ������? ");
	scanf("%d%d", &kor, &music);

	ave = (kor + music) / 2.0;

	printf("==========================\n");
	printf("����       ����       ���\n");
	printf("--------------------------\n");
	printf("%3d     %3d      %.1lf\n", kor, music, ave);
	printf("==========================\n");

	return 0;
}