/* ���ϸ�: assignment15.c
 * ����: �츮�� �˰� �ִ� ȯ���� �Ÿű������̴�.
���� �޷��� ������ ���� �Ÿű������� ������ ȯ�������Ḧ ���ؼ� ȯ���� �����ȴ�.
ȯ��������� ȯ��������� ���� �޶�����.
���� ȯ������������ ���ึ�� �̸� ��������, ȯ��������� ������ �ٸ��� å���ȴ�.
ȯ������������ 1.75%�� ������ �ִٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� �� ����Ǵ� ȯ���� �����ϰ�,
�����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
 * �ۼ���: ȫ����
 * ��¥: 2025.04.19.
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define EXC_FEE_RATE 1.75

double get_exchange_base_rate() {
    double base_rate;
    printf("��/�޷� �Ÿű�����? ");
    scanf("%lf", &base_rate);
    return base_rate;
}

double get_discount_rate() {
    double discount_rate;
    printf("ȯ�������(0~100%)? ");
    scanf("%lf", &discount_rate);
    return discount_rate;
}

double calculate_final_rate(double base_rate, double discount_rate) {
    double exchange_fee = base_rate * (EXC_FEE_RATE * (1.0 - discount_rate / 100)) / 100.0;
    return base_rate + exchange_fee;
}

double get_usd_amount() {
    double usd;
    printf("������ �޷�(USD)? ");
    scanf("%lf", &usd);
    return usd;
}

void print_result(double usd, double final_rate) {
    double krw = usd * final_rate;
    printf("USD %.2f ���� �� ==> KRW %.2f\n", usd, krw);
}

int main() {
    double base_rate, discount_rate, final_rate, usd;

    base_rate = get_exchange_base_rate();
    discount_rate = get_discount_rate();

    final_rate = calculate_final_rate(base_rate, discount_rate);
    printf("�޷� �� �� ���� ȯ���� %.6f�Դϴ�.\n", final_rate);

    usd = get_usd_amount();

    print_result(usd, final_rate);

    return 0;
}