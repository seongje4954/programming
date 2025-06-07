/* ���ϸ�: assignment13.c

    * ����:  ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢����
 ���ϴ����� ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢�� ������ ����ϴ� print_rect
 �Լ��� �����ϰ�, RECT ����ü ������ �����ؼ� ���簢�� ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

    * �ۼ���: ȫ����

    * ��¥: 2025.06.07.

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct POINT {
    int x1;
    int x2;
    int y1;
    int y2;
};

void getRectangleInfo(struct POINT* rect) {
    printf("���簢���� ���ϴ���(x,y)? ");
    scanf("%d %d", &rect->x1, &rect->y1);
    printf("���簢���� ������(x,y)? ");
    scanf("%d %d", &rect->x2, &rect->y2);
}

void printRectangleInfo(struct POINT rect) {
    printf("[RECT ���ϴ���: (%d,%d) ������: (%d,%d)]\n", rect.x1, rect.y1, rect.x2, rect.y2);
}

int main(void) {
    struct POINT rect;

    getRectangleInfo(&rect);
    printRectangleInfo(rect);

    return 0;
}
