#ifndef RESTAURANT_H
#define RESTAURANT_H

#define MAX_NAME_LENGTH 50
#define MAX_CUISINE_LENGTH 50

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH];
    char cuisine[MAX_CUISINE_LENGTH];
} Restaurant;

#endif