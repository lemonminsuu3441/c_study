#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592
#define CIRCUM(r) (2 * PI * (r))
#define AREA(r) (PI * (r) * (r))

int main()
{
	int radius;

	printf("원의 반지름 radius(cm)의 값은? ");
	scanf("%d", &radius);
	printf("원의 둘레는 %.2f(cm)이고 \n", CIRCUM(radius));
	printf("원의 넓이는 %.2f(cm²)이고 \n", AREA(radius));

	return 0;
}