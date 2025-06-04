/* 파일명: assignment17.c
 * 내용: 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다.
7번째 비트만 1인 값, 15번째 비트만 1인 값, 23번째 비트만 1인 값, 31번째 비트만 1인 값을 구해 16진수와 10진수로 출력하는 프로그램을 작성하시오.
 * 작성자: 홍성제
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int set_bit(int position) {
    return 1U << position;
}

void print_result(int position, unsigned int value) {
    printf("%d번째 비트만 1인 값: %08X %u\n", position, value, value);
}

int main() {
    unsigned int value;

    value = set_bit(7);
    print_result(7, value);

    value = set_bit(15);
    print_result(15, value);

    value = set_bit(23);
    print_result(23, value);

    value = set_bit(31);
    print_result(31, value);

    return 0;
}