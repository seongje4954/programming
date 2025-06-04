/* 파일명: assignment08.c
 * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
이때 파이는3.141592라고 하자.
 * 작성자: 홍성제
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.141592

double get_radius() {
    double radius;
    printf("반지름의 길이? ");
    scanf("%lf", &radius);
    return radius;
}

double calculate_volume(double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

void print_volume(double volume) {
    printf("구의 부피: %.6f\n", volume);
}

int main() {
    double radius, volume;

    radius = get_radius();

    volume = calculate_volume(radius);

    print_volume(volume);

    return 0;
}