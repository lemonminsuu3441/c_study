#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main()
{
	char name[10];
	int kor, eng, math, attend;
	double avr;

	printf("�л��� �̸� : "); fgets(name, sizeof(name), stdin);
	printf("���� : "); scanf("%d", &kor);
	printf("���� : "); scanf("%d", &eng);
	printf("���� : "); scanf("%d", &math);
	printf("��� : ");	scanf("%d", &attend);

	avr = (double)(kor + eng + math + attend) / 4;

	printf("\n-------------------------------------\n");
	printf("\t[%s]�л� >> ", name);

	(avr >= 70) && (attend >= 80) ? printf("�հ�!\n")
		: printf("���հ�!\n");

	printf("-------------------------------------\n");
	printf("\t�� ������ ���\t: %.1f\n", avr);
	printf("\t��� ����\t: %d\n", attend);
	printf("-------------------------------------\n");

	return 0;
}