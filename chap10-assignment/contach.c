#include <stdio.h>
#include <string.h>
#include "contact.h"

// isEqualContact()
// 반환값 : 만약 같으면 1 (true) 반환, 그렇지 않으면 0을 반환
// 입력: 비교할 두 Contact 값

int isEqualContact(Contact a, Contact b) {

    if (a.year == b.year && a.gender == b.gender &&
        strcmp(a.name, b.name) == 0 &&
        strcmp(a.phone, b.phone) == 0)
    {
        return 1;
    }
    return 0;
}

void PrintContact(Contact ct) {

    //이름 : ㅇㅇㅇ
    //전번 : 01000000000
    //성별 : 남자 또는 여자 
    //연도 : 0000

    printf("이름 : %s \n", ct.name);
    printf("전번 : %s \n", ct.phone);
    printf("성별 : %s \n", ct.gender == MAN ? "남자" : "여자");
    printf("연도 : %4d \n", ct.year);
}
int isEqualContactPtr(const Contact* a, const Contact* b) {
    if (a->year == b->year && a->gender == b->gender &&
        strcmp(a->name, b->name) == 0 &&
        strcmp(a->phone, b->phone) == 0)
    {
        return 1;
    }
    return 0;
}
void PrintContactPtr(const Contact* ct) {
    printf("이름 : %s \n", ct->name);
    printf("전번 : %s \n", ct->phone);
    printf("성별 : %s \n", ct->gender == MAN ? "남자" : "여자");
    printf("연도 : %4d \n", ct->year);
}