﻿/* 파일명: assignment06.c

 * 내용: 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 choose_menu 함수를 작성하시오.
만일 잘못된 번호를 선택하면 올바른 번호를 선택할 까지 계속 메뉴를 출력하고 다시 선택받아야 한다.
즉, choose_menu 함수는 반드시 0~3사이의 값을 리턴해야 한다.
choose_menu의 리턴 값에 따라 어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.


 * 작성자: 홍성제

 * 날짜: 2025.05.23.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

    int get_red(int color)
{
    return (color >> 16) & 0xFF;
}

int get_green(int color)
{
    return (color >> 8) & 0xFF;
}

int get_blue(int color)
{
    return color & 0xFF;
}

int make_rgb(int r, int g, int b)
{
    // 올바른 연산 순서를 위해 괄호 추가
    r = ((0xFF - r) << 16);
    g = ((0xFF - g) << 8);
    b = (0xFF - b);

    return (r | g | b);
}

int main()
{
    unsigned int color; // 음수 입력 방지
    int r, g, b, rgb;

    printf("RGB 색상 (HEX 값 입력) : ");
    if (scanf("%x", &color) != 1) // 입력 값이 올바른지 확인
    {
        printf("잘못된 입력입니다. 올바른 HEX 값을 입력하세요.\n");
        return 1;
    }

    r = get_red(color);
    g = get_green(color);
    b = get_blue(color);

    rgb = make_rgb(r, g, b);

    printf("RGB %06X의 보색: %06X\n", color, rgb);
    return 0;
}