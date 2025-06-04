/*파일명: Assignment07.c
 *내용: 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성, 커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력
 *작성자: 홍성제
 *날짜: 2025.04.01
 *버전:v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char size;
	int quantity;

	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf("%c %d", &size, &quantity);

	printf("%c 사이즈 %d잔을 주문합니다.", size, quantity);
}