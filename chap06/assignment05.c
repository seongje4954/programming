/* ���ϸ�: assignment05.c

 * ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�.
�� �Լ��� �̿��ؼ� 0�� �̷µ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.


 * �ۼ���: ȫ����

 * ��¥: 2025.05.23.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void is_even(int val, int* even, int* odd)
{
    if (val % 2 == 0)
        (*even)++;
    else
        (*odd)++;
}

void  Asignment05()
{
    int val = 0;
    int even = 0, odd = 0;
    printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

    do
    {
        scanf("%d", &val);

        if (val == 0)
            break;

        is_even(val, &even, &odd);
    } while (val != 0);

    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even, odd);
}

int main()
{
    Asignment05();
    return 0;
}