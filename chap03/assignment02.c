/* ���ϸ�: assignment02.c
 * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.08.
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int width, height;
	int area, circumference;

	printf("������ ����? ");
	scanf("%d", &width);
	printf("������ ����? ");
	scanf("%d", &height);

	area = width * height;
	printf("���簢���� ����: %d\n", area);

	circumference = (width * 2) + (height * 2);
	printf("���簢���� �ѷ�: %d", circumference);
}