/* 파일명: assignment18.c

 * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의 약수를 출력하는 프로그램을 작성하시오

 * 작성자: 홍성제

 * 날짜: 2025.05.23.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int rnum) {
    int i, cnt = 0;
    printf("%d의 약수: ", rnum);

    for (i = 1; i <= rnum; i++) {
        if (rnum % i == 0) {
            cnt++;
            printf("%d ", i);
        }
    }
    printf("=> 총 %d개\n", cnt);
}

void Asignment18(void) {
    int i;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 3; i++) {
        int rnum = rand() % 1000 + 1;
        divisors(rnum);
    }
}

int main(void) {
    Asignmen18();
    return 0;
}