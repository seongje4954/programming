/* ���ϸ�: assignment07.c
 * ����: �Ǽ� ���� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 �Ǽ� ���� �Է¹��� ���� 12.34ó�� �Ҽ� ǥ�� ����̳� 1.234eó�� ���� ǥ�� ����� �� �� ����� �� �ְ� �ϰ�
		 ������ �������� ����� ���� ���� ǥ�� ������� ����Ͻÿ�.
 * �ۼ���: ȫ����
 * ��¥: 2025.04.08.
 * ����: v1.0
 */

#include <stdio.h>
double number;

void num(void)
{
	printf("�Ǽ�? ");
	scanf("%lf", &number);
	printf("����: %e\n", number * number);
	printf("������: %e", number * number * number);
}

int main()
{
	num();
	return 0;
}