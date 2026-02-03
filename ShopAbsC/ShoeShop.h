#ifndef SHOESHOP_H
#define SHOESHOP_H
#include <stdbool.h>

// private class gjort til C
struct ShoeShop {
    int* shelf;
    int size;
} ShoeShop;

// Public class funktion signaturer
void new_ShoeShop(struct ShoeShop* s, int size);
void delet(struct ShoeShop* s);
void add_items(struct ShoeShop *s, int row, int num);
int in_stock(struct ShoeShop *s, int row);
int count_items(struct ShoeShop *s);
bool clear(struct ShoeShop *s, int row);



#endif