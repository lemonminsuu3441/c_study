#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  

int main()
{
	char name[10];
	int kor, eng, math, attend;
	double avr;

	printf("학생의 이름 : "); fgets(name, sizeof(name), stdin);
	printf("국어 : "); scanf("%d", &kor);
	printf("영어 : "); scanf("%d", &eng);
	printf("수학 : "); scanf("%d", &math);
	printf("출결 : ");	scanf("%d", &attend);

	avr = (double)(kor + eng + math + attend) / 4;

	printf("\n-------------------------------------\n");
	printf("\t[%s]학생 >> ", name);

	(avr >= 70) && (attend >= 80) ? printf("합격!\n")
		: printf("불합격!\n");

	printf("-------------------------------------\n");
	printf("\t네 과목의 평균\t: %.1f\n", avr);
	printf("\t출결 점수\t: %d\n", attend);
	printf("-------------------------------------\n");

	return 0;
}