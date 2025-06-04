/* 파일명: assignment02.c
 * 내용: 화씨 온도(F)를 실수로 입력받아 섭씨 온도(C)로 변환해서 출력하는 프로그램을 작성하시오.
화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.
 * 작성자: 홍성제
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_fahrenheit() {
    double fahrenheit;
    printf("화씨 온도(°F)? ");
    scanf("%lf", &fahrenheit);
    return fahrenheit;
}

double convert_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void print_celsius(double celsius) {
    printf("섭씨 온도: %.2f°C\n", celsius);
}

int main(void) {
    double fahrenheit, celsius;

    fahrenheit = get_fahrenheit();

    celsius = convert_to_celsius(fahrenheit);

    print_celsius(celsius);

    return 0;
}