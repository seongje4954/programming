/*���ϸ�: Assignment11.c
 *����: ������ ���� ���� 3.14159265��� �� ��, ���̰��� ���� ���� ������� ����ϴ� ���α׷��� �ۼ�, �Ҽ��� ���� 2�ڸ�����, �Ҽ��� ���� 4�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ����ϰ�, ���� ǥ��ε� ���
 *�ۼ���: ȫ����
 *��¥: 2025.04.01
 *����:v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define pi 3.14159265

int main(void)
{
	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e", pi);

}