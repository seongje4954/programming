/* 파일명: assignment04.c
 * 내용: 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오.
		 힘의 크기는 N단위로 입력받고, 이동한 거리는 m단위로 입력받는다.
 * 작성자: 홍성제
 * 날짜: 2025.04.08.
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, M;
	float result = 0.0;

	printf("힘(N)? ");
	scanf("%d", &N);

	printf("이동거리(m)? ");
	scanf("%d", &M);

	result = N * M;

	printf("일의 양: %.2f J", result);
}