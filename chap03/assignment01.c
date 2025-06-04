/* 파일명: assignment01.c
 * 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
 * 작성자: 홍성제
 * 날짜: 2025.04.08.
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int length;
	printf("한 변의 길이 ? ");
	scanf("%d", &length);

	printf("정사각형의 넓이: %d\n", length * length);
	printf("정사각형의 둘레: %d", length * 4);
}