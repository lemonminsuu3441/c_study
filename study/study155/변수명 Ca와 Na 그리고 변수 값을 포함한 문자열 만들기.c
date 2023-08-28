#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char f_name[20], temp[10];  // 파일명을 저장할 배열, 임시 문자열 배열
    int Ca, Na;

    for (Ca = 10; Ca < 30; Ca += 10)
    {
        for (Na = 1; Na < 4; Na++)
        {
            strcpy(f_name, "file");  // 파일명에 "file"을 저장

            strcat(f_name, "_Ca_");  // 파일명에 "_Ca_"를 연결
            sprintf(temp, "%d", Ca); // 정수 Ca를 문자열로 변환하여 temp에 저장
            strcat(f_name, temp);    // 파일명에 Ca의 값을 연결

            strcat(f_name, "_Na_");  // 파일명에 "_Na_"를 연결
            sprintf(temp, "%d", Na); // 정수 Na를 문자열로 변환하여 temp에 저장
            strcat(f_name, temp);    // 파일명에 Na의 값을 연결

            printf("Ca=%d, Na=%d일 때 파일명 : %s \n", Ca, Na, f_name);
        }
    }

    return 0;
}
