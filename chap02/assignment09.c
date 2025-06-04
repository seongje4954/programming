/*파일명: Assignment09.c
 *내용: 16진수 정수를 입력받아 10진수로 출력하는 프로그램 작성
 *작성자: 홍성제
 *날짜: 2025.04.01
 *버전:v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("16진수 정수? ");
	scanf("%x", &num);

	printf("16진수 %x는 10진수로 %d입니다.", num, num);

}