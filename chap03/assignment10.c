/* 파일명: assignment10.c
 * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.
 * 작성자: 홍성제
 * 날짜: 2025.04.08.
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float usd, exchange_rate, krw;
	printf("USD? ");
	scanf("%f", &usd);
	printf("원/달러 환율? ");
	scanf("%f", &exchange_rate);

	krw = usd * exchange_rate;

	printf("USD %.2f = KRW %.2f", usd, krw);
}