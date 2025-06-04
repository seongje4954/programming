﻿/* 파일명: assignment09.c

 * 내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb함수를 정의하시오.
 앞에서 정의한 get_red, get_green.get_blue 함수를 함께 이용해서
 입력받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오


 * 작성자: 홍성제

 * 날짜: 2025.05.23.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

    unsigned int get_red(unsigned int color)
{
    return (color >> 16) & 0xFF;
}

unsigned int get_green(unsigned int color)
{
    return (color >> 8) & 0xFF;
}

unsigned int get_blue(unsigned int color)
{
    return color & 0xFF;
}

unsigned int make_rgb(unsigned int color)
{
    unsigned int r = get_red(color);
    unsigned int g = get_green(color);
    unsigned int b = get_blue(color);

    return ((0xFF - r) << 16) | ((0xFF - g) << 8) | (0xFF - b);
}

int main(void)
{
    unsigned int color;
    printf("RGB 색상 (HEX 값 입력) : ");
    if (scanf("%x", &color) != 1)
    {
        printf("잘못된 입력입니다. 올바른 HEX 값을 입력하세요.\n");
        return 1;
    }

    unsigned int comp_color = make_rgb(color);

    printf("RGB %06X의 보색: %06X\n", color, comp_color);
    return 0;
}