/* ���ϸ�: assignment01.c
 * ����: ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
������ kg ����, �ӷ��� m/s ������ �Է¹޴´�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.19.
 * ����: v1.0
 */

#include <stdio.h>

double get_mass() {
    double mass;
    printf("����(kg)? ");
    scanf_s("%lf", &mass);
    return mass;
}

double get_velocity() {
    double velocity;
    printf("�ӷ�(m/s)? ");
    scanf_s("%lf", &velocity);
    return velocity;
}

double kinetic_energy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}

void print_energy(double energy) {
    printf("� ������: %.2f J �Դϴ�.\n", energy);
}

int main() {
    double mass, velocity, energy;

    mass = get_mass();
    velocity = get_velocity();

    energy = kinetic_energy(mass, velocity);

    print_energy(energy);

    return 0;
}