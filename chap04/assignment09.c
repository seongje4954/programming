/* ���ϸ�: assignment09.c
 * ����: �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.19.
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_seconds() {
    int seconds;
    printf("����ð�(��)? ");
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
    printf("����ð��� ");
    if (hours > 0) printf("%d�ð� ", hours);
    if (minutes > 0) printf("%d�� ", minutes);
    if (seconds > 0) printf("%d�� ", seconds);
    printf("�Դϴ�.\n");
}

int main() {
    int seconds, hours, minutes;

    seconds = get_seconds();

    hours = convert_hours(&seconds);
    minutes = convert_minutes(&seconds);

    print_time(hours, minutes, seconds);

    return 0;
}