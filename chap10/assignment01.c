/* 파일명: assignment01.c

    * 내용:  인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을 작성하시오.
패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을 대신 출력하시오.

    * 작성자: 홍성제

    * 날짜: 2025.06.07.

    * 버전: v1.0

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
