// #pragma once

#ifndef _CONTACT_H
#define _CONTACT_H

enum gender { MAN, WOMEN };
typedef enum gender EGender;

struct contact {
    char name[24];
    char phone[24];
    EGender gender;
    int year;
};

typedef struct contact Contact;

int isEqualContact(Contact a, Contact b);
void printContact(Contact ct);
int isEqualContactPtr(Contact* a, Contact* b);
void printContactPtr(Contact* ct);

#endif