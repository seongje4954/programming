/*파일명: Assignment05.c
 *내용: 몸무게를 입력받아서 출력하는 프로그램을 작성, 몸무게는 실수로 입력받으며, 소수점 이하 2자리까지만 출력
 *작성자: 홍성제
 *날짜: 2025.04.01
 *버전:v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float weight;

	printf("몸무게? ");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %.2fkg입니다.", weight);
}