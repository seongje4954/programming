/* 파일명: assignment03.c
 * 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오.
 * 작성자: 홍성제
 * 날짜: 2025.04.08.
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double weight, height;

void dweight(void)
{
	printf("질량(kg)? ");
	scanf("%lf", &weight);
}

void dheight(void)
{
	printf("높이(m)? ");
	scanf("%lf", &height);
}

void denergy(void)
{
	double energy = 9.8 * weight * height;
	printf("위치에너지: %f J", energy);
}

int main() {
	dweight();
	dheight();
	denergy();
	return 0;
}