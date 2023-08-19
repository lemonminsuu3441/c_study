#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char university[11], name[10]; // 문자열을 저정할 배열
	char std_no[9];

	// 사용자의 정보를 배열
	printf("학교명은? ");
	scanf("%s", university);
	printf("학번은? ");
	scanf("%s", std_no);
	getchar();
	printf("이름은? ");
	fgets(name, sizeof(name), stdin); // 빈 칸이 포함된 이름도 입력받을 수 있도록 gets 함수를 이용
	
	printf("========================================\n");
	printf("%s %c%c학번 %s \n", university, std_no[2], std_no[3], name);
	printf("========================================\n");

	return 0;
}