/* ���ϸ�: assignment06.c
 * ����: ����Ʈ�� ������ ��������(m^2)�� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 1m^2�� 0.3025�� �ش��Ѵ�. ���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿��غ���.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.08.
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#define pyeong 0.3025
#include <stdio.h>

int main(void)
{
	float m = 0.0, result = 0.0;
	printf("����Ʈ�� ����(��������)? ");
	scanf("%f", &m);

	result = m * pyeong;

	printf("%.2f �������� = %.2f ��", m, result);
}