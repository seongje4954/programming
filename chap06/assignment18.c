/* ���ϸ�: assignment18.c

 * ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�.
0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

 * �ۼ���: ȫ����

 * ��¥: 2025.05.23.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisors(int rnum) {
    int i, cnt = 0;
    printf("%d�� ���: ", rnum);

    for (i = 1; i <= rnum; i++) {
        if (rnum % i == 0) {
            cnt++;
            printf("%d ", i);
        }
    }
    printf("=> �� %d��\n", cnt);
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