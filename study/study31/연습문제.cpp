#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double height_cm, weight_kg, height_feet, weight_lb;
	double standard_weight;

	printf("Ű(cm)�� �Է��ϼ���. ");
	scanf("%lf", &height_cm);
	printf("������(kg)�� �Է��ϼ���. ");
	scanf("%lf", &weight_kg);

	standard_weight = (height_cm - 100) * 0.9;
	height_feet = height_cm / 30.48;
	weight_lb = weight_kg * 2.20459;

	printf("����� Ű�� %.1lfcm (%.1lffeet)�Դϴ�.\n", height_cm, height_feet);
	printf("����� ü���� %.1lfkg (%.1lflb)�Դϴ�.\n", weight_kg, weight_lb);
	printf("ǥ�� ü�� %.1lf���� ���̴� %+.1lfkg�Դϴ�.\n", weight_kg, weight_kg - standard_weight);

	return 0;
}