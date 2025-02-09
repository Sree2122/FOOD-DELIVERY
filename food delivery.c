#include "order.h"
#include <stdio.h>
#include <stdlib.h> // For malloc/free (if needed)
#include <string.h>  // For string functions

#define MAX_USERS 100
#define MAX_RESTAURANTS 100
#define MAX_MENU_ITEMS 100
#define MAX_ORDERS 100

User users[MAX_USERS];
int num_users = 0;

Restaurant restaurants[MAX_RESTAURANTS];
int num_restaurants = 0;

MenuItem menu_items[MAX_MENU_ITEMS];
int num_menu_items = 0;

Order orders[MAX_ORDERS];
int num_orders = 0;

void add_user(int id, const char *name, const char *address, const char *phone);
void add_restaurant(int id, const char *name, const char *cuisine);
void add_menu_item(int id, int restaurant_id, const char *name, const char *description, float price);
void place_order(int user_id, int restaurant_id, int menu_item_ids[], int num_items);
// ... other functions (save/load, find user/restaurant/menu item, update order status, etc.)