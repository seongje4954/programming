/* ���ϸ�: assignment19.c

 * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��Ͻÿ�.
���� ��� graph(1200, 100);�� 100���� *�� �ϳ��� ����ϹǷ� *�� 12�� ����ϰ�,
graph(1200, 10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�.
0~9999������ ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: ȫ����

 * ��¥: 2025.05.23.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int rnum) {
    int i;
    for (i = 0; i < rnum / 100; i++) {
        printf("*");
    }
}

void Asignment19(void) {
    int i, rnum;
    srand((unsigned int)time(NULL));

    for (i = 0; i < 3; i++) {
        rnum = rand() % 10000;
        printf("%d: ", rnum);
        graph(rnum);
        printf("\n");
    }
}

int main(void) {
    Asignment19();
    return 0;
}