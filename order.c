#ifndef ORDER_H
#define ORDER_H

#include "user.h"
#include "restaurant.h"
#include "menu.h"

#define MAX_ORDER_ITEMS 10 // Max items per order

typedef struct {
    int order_id;
    int user_id;
    int restaurant_id;
    int menu_item_ids[MAX_ORDER_ITEMS];
    int num_items;
    char order_status[20]; // "placed", "processing", "delivered", etc.
} Order;

#endif