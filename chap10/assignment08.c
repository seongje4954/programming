/* ���ϸ�: assignment08.c

    * ����:  Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�.
�� ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�.
PRODUCT ����ü�� �Ű������� ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�.
PRODUCT ����ü ������ ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

    * �ۼ���: ȫ����

    * ��¥: 2025.06.07.

    * ����: v1.0

    */


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct PRODUCT {
    char name[20];
    int price;
    int stock;
};

void getProductInfo(struct PRODUCT* product) {
    printf("��ǰ��? ");
    scanf("%s", product->name);
    printf("����? ");
    scanf("%d", &product->price);
    printf("���? ");
    scanf("%d", &product->stock);
}

void printProductInfo(struct PRODUCT product) {
    printf("[%s %d�� ���:%d]\n", product.name, product.price, product.stock);
}

int main() {
    struct PRODUCT product;

    getProductInfo(&product);
    printProductInfo(product);

    return 0;
}
