/*���ϸ�: Assignment07.c
 *����: Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ�, Ŀ�� ������� S, T, G �� ���� ���� �� �ϳ��� �Է�
 *�ۼ���: ȫ����
 *��¥: 2025.04.01
 *����:v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char size;
	int quantity;

	printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
	scanf("%c %d", &size, &quantity);

	printf("%c ������ %d���� �ֹ��մϴ�.", size, quantity);
}