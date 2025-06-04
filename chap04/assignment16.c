/* 파일명: assignment16.c
 * 내용: 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, green, blue에 8비트씩을 사용해서 색상을 표현하므로 24비트 트루컬러라고 한다.
컴퓨터 시스템에서는 32비트 데이터의 최하위 바이트부터 red, green, blue의 순서로 색상 정보를 저장하고 최상위 바이트는 사용하지 않고 0으로 채운다.
0~255사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.
 * 작성자: 홍성제
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_color_value(const char* color_name) {
    int value;
    printf("%s? ", color_name);
    scanf("%d", &value);

    value %= 256;

    return value;
}

int create_rgb_color(int red, int green, int blue) {
    return (blue << 16) | (green << 8) | red;
}

void print_rgb_color(int color) {
    printf("RGB 트루컬러: %06X\n", color);
}

int main() {
    int red, green, blue, rgb_color;

    red = get_color_value("Red");
    green = get_color_value("Green");
    blue = get_color_value("Blue");

    rgb_color = create_rgb_color(red, green, blue);

    print_rgb_color(rgb_color);

    return 0;
}