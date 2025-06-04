/* ���ϸ�: assignment16.c
 * ����: ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ���� ����ؼ� ������ ǥ���ϹǷ� 24��Ʈ Ʈ���÷���� �Ѵ�.
��ǻ�� �ý��ۿ����� 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ ���� ������ �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���.
0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.19.
 * ����: v1.0
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
    printf("RGB Ʈ���÷�: %06X\n", color);
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