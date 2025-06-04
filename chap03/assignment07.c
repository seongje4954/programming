/* 파일명: assignment07.c
 * 내용: 실수 값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램을 작성하시오.
		 실수 값을 입력받을 때는 12.34처럼 소수 표기 방법이나 1.234e처럼 지수 표기 방법을 둘 다 사용할 수 있게 하고
		 제곱과 세제곱을 출력할 때는 지수 표기 방법으로 출력하시오.
 * 작성자: 홍성제
 * 날짜: 2025.04.08.
 * 버전: v1.0
 */

#include <stdio.h>
double number;

void num(void)
{
	printf("실수? ");
	scanf("%lf", &number);
	printf("제곱: %e\n", number * number);
	printf("세제곱: %e", number * number * number);
}

int main()
{
	num();
	return 0;
}