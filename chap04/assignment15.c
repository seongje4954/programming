/* 파일명: assignment15.c
 * 내용: 우리가 알고 있는 환율은 매매기준율이다.
실제 달러를 구입할 때는 매매기준율에 은행의 환전수수료를 더해서 환율이 결정된다.
환전수수료는 환전우대율에 따라 달라진다.
보통 환전수수료율은 은행마다 미리 정해지며, 환전우대율은 고객마다 다르게 책정된다.
환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율고 환전우대율(%)를 입력받아 달러를 살 때 적용되는 환율을 결정하고,
구입하고자 하는 달러가 얼마인지 입력받아서 뭔 원에 해당하는지 출력하는 프로그램을 작성하시오
 * 작성자: 홍성제
 * 날짜: 2025.04.19.
 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define EXC_FEE_RATE 1.75

double get_exchange_base_rate() {
    double base_rate;
    printf("원/달러 매매기준율? ");
    scanf("%lf", &base_rate);
    return base_rate;
}

double get_discount_rate() {
    double discount_rate;
    printf("환율우대율(0~100%)? ");
    scanf("%lf", &discount_rate);
    return discount_rate;
}

double calculate_final_rate(double base_rate, double discount_rate) {
    double exchange_fee = base_rate * (EXC_FEE_RATE * (1.0 - discount_rate / 100)) / 100.0;
    return base_rate + exchange_fee;
}

double get_usd_amount() {
    double usd;
    printf("구입할 달러(USD)? ");
    scanf("%lf", &usd);
    return usd;
}

void print_result(double usd, double final_rate) {
    double krw = usd * final_rate;
    printf("USD %.2f 구입 시 ==> KRW %.2f\n", usd, krw);
}

int main() {
    double base_rate, discount_rate, final_rate, usd;

    base_rate = get_exchange_base_rate();
    discount_rate = get_discount_rate();

    final_rate = calculate_final_rate(base_rate, discount_rate);
    printf("달러 살 때 적용 환율은 %.6f입니다.\n", final_rate);

    usd = get_usd_amount();

    print_result(usd, final_rate);

    return 0;
}