#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int su, n;
	printf("수 입력  : ");
	scanf("%d", &su);
	printf("계산법(1,2,3)  : ");
	scanf("%d", &n);
	switch (n)
	{
	case  1: printf("입력한 수는  %d입니다.\n", su); break;
	case  2: printf("입력한 수%d의 2배수는 %d입니다.\n", su, su * n); break;
	case  3: printf("입력한 수%d의 3배수는  %d입니다.\n", su, su * n); break;
	default: printf("=== 잘못된 입력입니다 ===\n");
	}
}