#ifndef MENU_H
#define MENU_H

#define MAX_NAME_LENGTH 50
#define MAX_DESCRIPTION_LENGTH 100

typedef struct {
    int id;
    int restaurant_id; // Link to restaurant
    char name[MAX_NAME_LENGTH];
    char description[MAX_DESCRIPTION_LENGTH];
    float price;
} MenuItem;

#endif