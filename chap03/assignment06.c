/* 파일명: assignment06.c
 * 내용: 아파트의 면적을 제곱미터(m^2)로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오.
		 1m^2는 0.3025평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.
 * 작성자: 홍성제
 * 날짜: 2025.04.08.
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#define pyeong 0.3025
#include <stdio.h>

int main(void)
{
	float m = 0.0, result = 0.0;
	printf("아파트의 면적(제곱미터)? ");
	scanf("%f", &m);

	result = m * pyeong;

	printf("%.2f 제곱미터 = %.2f 평", m, result);
}