/*파일명: Assignment10.c
 *내용: 정수를 8진수, 10진수, 16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램을 작성, 8진수를 입력할 때는 앞에 0을 붙여서 012처럼 입력하고, 16진수를 입력할 때는 앞에 0x를 붙여서 0x12처럼 입력
 *작성자: 홍성제
 *날짜: 2025.04.01
 *버전:v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
	scanf("%x", &num);

	printf(" 8진수: %#o\n", num);
	printf("10진수: %d\n", num);
	printf("16진수: %#x\n", num);
}