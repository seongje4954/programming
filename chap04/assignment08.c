/* ���ϸ�: assignment08.c
 * ����: �������� ���̸� �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�̶� ���̴�3.141592��� ����.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.19.
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define PI 3.141592

double get_radius() {
    double radius;
    printf("�������� ����? ");
    scanf("%lf", &radius);
    return radius;
}

double calculate_volume(double radius) {
    return (4.0 / 3.0) * PI * pow(radius, 3);
}

void print_volume(double volume) {
    printf("���� ����: %.6f\n", volume);
}

int main() {
    double radius, volume;

    radius = get_radius();

    volume = calculate_volume(radius);

    print_volume(volume);

    return 0;
}