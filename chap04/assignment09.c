/* 파일명: assignment09.c
 * 내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.
 * 작성자: 홍성제
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_seconds() {
    int seconds;
    printf("재생시간(초)? ");
    scanf("%d", &seconds);
    return seconds;
}

int convert_hours(int* seconds) {
    int hours = *seconds / 3600;
    *seconds %= 3600;
    return hours;
}

int convert_minutes(int* seconds) {
    int minutes = *seconds / 60;
    *seconds %= 60;
    return minutes;
}

void print_time(int hours, int minutes, int seconds) {
    printf("재생시간은 ");
    if (hours > 0) printf("%d시간 ", hours);
    if (minutes > 0) printf("%d분 ", minutes);
    if (seconds > 0) printf("%d초 ", seconds);
    printf("입니다.\n");
}

int main() {
    int seconds, hours, minutes;

    seconds = get_seconds();

    hours = convert_hours(&seconds);
    minutes = convert_minutes(&seconds);

    print_time(hours, minutes, seconds);

    return 0;
}