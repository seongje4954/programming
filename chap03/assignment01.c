/* ���ϸ�: assignment01.c
 * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.08.
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int length;
	printf("�� ���� ���� ? ");
	scanf("%d", &length);

	printf("���簢���� ����: %d\n", length * length);
	printf("���簢���� �ѷ�: %d", length * 4);
}