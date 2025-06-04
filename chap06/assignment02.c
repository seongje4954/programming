/* 파일명: assignment03.c

 * 내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오.
distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를 구하는 프로그램을 작성하시오.


 * 작성자: 홍성제

 * 날짜: 2025.05.23.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

float distance(int x1, int y1, int x2, int y2)
{
    int width = pow(x2 - x1, 2);
    int length = pow(y2 - y1, 2);

    return sqrt(width + length);
}

void Asignment03()
{
    int x1, y1, x2, y2;
    printf("직선의 시작점 좌표? ");
    scanf("%d %d", &x1, &y1);
    printf("직선의 끝점 좌표? ");
    scanf("%d %d", &x2, &y2);

    printf("(%d, %d)~(%d, %d) 직선의 길이: %f\n", x1, y1, x2, y2, distance(x1, y1, x2, y2));
}

int main()
{
    Asignment03();
    return 0;
}