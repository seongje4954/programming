/* 파일명: assignment01.c
 * 내용: 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
질량은 kg 단위, 속력은 m/s 단위로 입력받는다.
 * 작성자: 홍성제
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#include <stdio.h>

double get_mass() {
    double mass;
    printf("질량(kg)? ");
    scanf_s("%lf", &mass);
    return mass;
}

double get_velocity() {
    double velocity;
    printf("속력(m/s)? ");
    scanf_s("%lf", &velocity);
    return velocity;
}

double kinetic_energy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}

void print_energy(double energy) {
    printf("운동 에너지: %.2f J 입니다.\n", energy);
}

int main() {
    double mass, velocity, energy;

    mass = get_mass();
    velocity = get_velocity();

    energy = kinetic_energy(mass, velocity);

    print_energy(energy);

    return 0;
}