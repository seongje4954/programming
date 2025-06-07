/* 파일명: assignment03.c

    * 내용:  LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
아이디를 입력받아서 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와 등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다.
LOGIN 구조체 배열은 크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.

    * 작성자: 홍성제

    * 날짜: 2025.06.07.

    * 버전: v1.0

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
            return 1;  // 로그인 성공
        }
    }
    return 0;  // 로그인 실패
}

void displayResult(int success) {
    if (success) {
        printf("로그인 성공\n");
    }
    else {
        printf("로그인 실패\n");
    }
}

int main() {
    LOGIN info[5] = {
        {"qwer", "1234"},
        {"asdf", "5678"},
        {"qpwoeiru", "zxcv"},
        {"guest", "idontknow"},
        {"가나다", "일이삼사"}
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
