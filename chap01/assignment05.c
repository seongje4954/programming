/*���ϸ�: Assignment05.c
 *����: �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ�, �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ���
 *�ۼ���: ȫ����
 *��¥: 2025.04.01
 *����:v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float weight;

	printf("������? ");
	scanf("%f", &weight);

	printf("�Է��� �����Դ� %.2fkg�Դϴ�.", weight);
}