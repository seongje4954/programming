/* ���ϸ�: assignment01.c

    * ����:  ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.

    * �ۼ���: ȫ����

    * ��¥: 2025.06.07.

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct login {
    char id[21];
    char pw[21];
};

void getLoginInfo(struct login* data) {
    int i;
    printf("ID? ");
    scanf("%s", data->id);
    printf("Password? ");
    scanf("%s", data->pw);
}

void displayLoginInfo(struct login data) {
    int i;
    printf("ID : %s\n", data.id);
    printf("PW : ");
    for (i = 0; i < 20; i++) {
        if (data.pw[i] == '\0')
            break;
        printf("*");
    }
    printf("\n");
}

int main() {
    struct login user;
    getLoginInfo(&user);
    displayLoginInfo(user);
    return 0;
}
