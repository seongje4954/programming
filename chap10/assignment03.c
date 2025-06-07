/* ���ϸ�: assignment03.c

    * ����:  LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
���̵� �Է¹޾Ƽ� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�.
LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.

    * �ۼ���: ȫ����

    * ��¥: 2025.06.07.

    * ����: v1.0

    */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct login {
    char id[20];
    char pw[20];
} LOGIN;

void getLoginInfo(LOGIN* data) {
    printf("ID? ");
    scanf("%s", data->id);

    if (strcmp(data->id, ".") == 0) {
        return;
    }

    printf("PW: ");
    scanf("%s", data->pw);
}

int checkLogin(LOGIN* info, int size, LOGIN* data) {
    for (int i = 0; i < size; i++) {
        if (strcmp(info[i].id, data->id) == 0 && strcmp(info[i].pw, data->pw) == 0) {
            return 1;  // �α��� ����
        }
    }
    return 0;  // �α��� ����
}

void displayResult(int success) {
    if (success) {
        printf("�α��� ����\n");
    }
    else {
        printf("�α��� ����\n");
    }
}

int main() {
    LOGIN info[5] = {
        {"qwer", "1234"},
        {"asdf", "5678"},
        {"qpwoeiru", "zxcv"},
        {"guest", "idontknow"},
        {"������", "���̻��"}
    };

    LOGIN data;
    while (1) {
        getLoginInfo(&data);

        if (strcmp(data.id, ".") == 0) {
            break;
        }

        int success = checkLogin(info, 5, &data);
        displayResult(success);
    }

    return 0;
}
