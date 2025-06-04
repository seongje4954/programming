/*파일명: Assignment02.c
 *내용: 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성, 학새의 번호는 정수로, 학점은 실수로 입력
 *작성자: 홍성제
 *날짜: 2025.04.01
 *버전:v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char num[20];
	float score = 0.0;

	printf("번호? ");
	scanf("%s", num);
	printf("학점? ");
	scanf("%f", &score);
	printf("%s번 학생의 학점은 %f입니다.", num, score);
}
