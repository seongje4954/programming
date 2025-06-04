/* ���ϸ�: assignment02.c
 * ����: ȭ�� �µ�(F)�� �Ǽ��� �Է¹޾� ���� �µ�(C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ������ ������ ����.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.19.
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double get_fahrenheit() {
    double fahrenheit;
    printf("ȭ�� �µ�(��F)? ");
    scanf("%lf", &fahrenheit);
    return fahrenheit;
}

double convert_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

void print_celsius(double celsius) {
    printf("���� �µ�: %.2f��C\n", celsius);
}

int main(void) {
    double fahrenheit, celsius;

    fahrenheit = get_fahrenheit();

    celsius = convert_to_celsius(fahrenheit);

    print_celsius(celsius);

    return 0;
}