#ifndef USER_H
#define USER_H

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100
#define MAX_PHONE_LENGTH 20

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char address[MAX_ADDRESS_LENGTH];
    char phone[MAX_PHONE_LENGTH];
} User;

#endif