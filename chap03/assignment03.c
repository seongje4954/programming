/* ���ϸ�: assignment03.c
 * ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.08.
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double weight, height;

void dweight(void)
{
	printf("����(kg)? ");
	scanf("%lf", &weight);
}

void dheight(void)
{
	printf("����(m)? ");
	scanf("%lf", &height);
}

void denergy(void)
{
	double energy = 9.8 * weight * height;
	printf("��ġ������: %f J", energy);
}

int main() {
	dweight();
	dheight();
	denergy();
	return 0;
}