# Food Delivery System (C Project - Simplified Example)

This is a *highly simplified* Food Delivery System application written in C. It provides a basic framework for managing users, restaurants, menus, and orders. **This example is for educational purposes only and is not a production-ready system.** It lacks many essential features, error handling, security considerations, and scalability required for real-world use.

**Disclaimer:** This code is *not* intended for actual deployment. It is a highly simplified example for educational purposes only. Using this code in a real-world scenario without significant modifications and addressing scalability, security, error handling, and integrations (payment, delivery) is strongly discouraged.

## Features (Highly Simplified)

*   **User Management:** Add new users to the system.
*   **Restaurant Management:** Add new restaurants to the system.
*   **Menu Management:** Add menu items to restaurants.
*   **Order Management:** Place orders (very basic implementation).
*   **(Basic Menu-Driven Interface):** Simple command-line interface for interaction.

## Build Instructions (using GCC)

1.  Save all `.c` and `.h` files in the same directory.
2.  Open a terminal or command prompt in that directory.
3.  Compile:
    ```bash
    gcc main.c food_delivery_system.c -o food_delivery
    ```
4.  Run:
    ```bash
    ./food_delivery
    ```

## Usage

1.  Run the executable (`./food_delivery`).
2.  Follow the menu prompts to interact with the system.

## File Format (Not Implemented in Basic Example)

Data persistence (saving and loading data to a file or database) is *not* implemented in this basic example. You would need to add this functionality. Possible formats include:

*   Plain text files (CSV, JSON)
*   Binary files
*   Database (SQLite, PostgreSQL, etc.)

## Code Structure

*   `user.h`: Defines the `User` struct.
*   `restaurant.h`: Defines the `Restaurant` struct.
*   `menu.h`: Defines the `MenuItem` struct.
*   `order.h`: Defines the `Order` struct.
*   `food_delivery_system.c`: Implements the core logic for managing users, restaurants, menus, and orders.
*   `main.c`: Contains the `main` function and handles user interaction (basic menu).

## Data Structures (Example)

```c
// user.h
typedef struct {
    int id;
    char name[50];
    char address[100];
    char phone[20];
} User;

// restaurant.h
typedef struct {
    int id;
    char name[50];
    char cuisine[50];
} Restaurant;

// menu.h
typedef struct {
    int id;
    int restaurant_id; // Link to restaurant
    char name[50];
    char description[100];
    float price;
} MenuItem;

// order.h
typedef struct {
    int order_id;
    int user_id;
    int restaurant_id;
    int menu_item_ids[10]; // Example: Allow up to 10 items in an order
    int num_items;
    char order_status[20]; // "placed", "processing", "delivered", etc.
} Order;
