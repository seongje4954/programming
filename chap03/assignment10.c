/* ���ϸ�: assignment10.c
 * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.08.
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float usd, exchange_rate, krw;
	printf("USD? ");
	scanf("%f", &usd);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &exchange_rate);

	krw = usd * exchange_rate;

	printf("USD %.2f = KRW %.2f", usd, krw);
}