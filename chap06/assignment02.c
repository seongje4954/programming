/* ���ϸ�: assignment03.c

 * ����: �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�.
distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.


 * �ۼ���: ȫ����

 * ��¥: 2025.05.23.

 * ����: v1.0

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
    printf("������ ������ ��ǥ? ");
    scanf("%d %d", &x1, &y1);
    printf("������ ���� ��ǥ? ");
    scanf("%d %d", &x2, &y2);

    printf("(%d, %d)~(%d, %d) ������ ����: %f\n", x1, y1, x2, y2, distance(x1, y1, x2, y2));
}

int main()
{
    Asignment03();
    return 0;
}