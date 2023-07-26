#include <stdio.h> // 전처리기 지시 영역
/*
	(프로그램의 기본 구조를 보여주는 프로그램.
	밑변이 4이고 높이가 5인 사각형의 면적 구하기) */

int main()
{
	// 변수 선언
	int area, width, heigth;

	//자료 입력: 여기서는 생략

	//자료 처리
	width = 4;
	heigth = 5;
	area = width * heigth;

	//결과 처리
	printf("면적 = %d \n", area);

	return 0;
}

