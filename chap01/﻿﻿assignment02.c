/*���ϸ�: Assignment02.c
 *����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ�, �л��� ��ȣ�� ������, ������ �Ǽ��� �Է�
 *�ۼ���: ȫ����
 *��¥: 2025.04.01
 *����:v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char num[20];
	float score = 0.0;

	printf("��ȣ? ");
	scanf("%s", num);
	printf("����? ");
	scanf("%f", &score);
	printf("%s�� �л��� ������ %f�Դϴ�.", num, score);
}
