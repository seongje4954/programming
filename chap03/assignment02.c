/* 파일명: assignment02.c
 * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.
 * 작성자: 홍성제
 * 날짜: 2025.04.08.
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int width, height;
	int area, circumference;

	printf("가로의 길이? ");
	scanf("%d", &width);
	printf("세로의 길이? ");
	scanf("%d", &height);

	area = width * height;
	printf("직사각형의 넓이: %d\n", area);

	circumference = (width * 2) + (height * 2);
	printf("직사각형의 둘레: %d", circumference);
}