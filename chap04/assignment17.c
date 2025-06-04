/* ���ϸ�: assignment17.c
 * ����: 32��Ʈ ũ���� ������(��ȣ ���� ������)���� 0~31�� ��Ʈ�� �����Ѵ�.
7��° ��Ʈ�� 1�� ��, 15��° ��Ʈ�� 1�� ��, 23��° ��Ʈ�� 1�� ��, 31��° ��Ʈ�� 1�� ���� ���� 16������ 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.19.
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int set_bit(int position) {
    return 1U << position;
}

void print_result(int position, unsigned int value) {
    printf("%d��° ��Ʈ�� 1�� ��: %08X %u\n", position, value, value);
}

int main() {
    unsigned int value;

    value = set_bit(7);
    print_result(7, value);

    value = set_bit(15);
    print_result(15, value);

    value = set_bit(23);
    print_result(23, value);

    value = set_bit(31);
    print_result(31, value);

    return 0;
}