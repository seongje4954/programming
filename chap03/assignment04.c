/* ���ϸ�: assignment04.c
 * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 ���� ũ��� N������ �Է¹ް�, �̵��� �Ÿ��� m������ �Է¹޴´�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.08.
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, M;
	float result = 0.0;

	printf("��(N)? ");
	scanf("%d", &N);

	printf("�̵��Ÿ�(m)? ");
	scanf("%d", &M);

	result = N * M;

	printf("���� ��: %.2f J", result);
}