#ifndef SHOP_H
#define SHOP_H
#include <stdbool.h>

//Pointer pointer funktioner
struct Shop{
    void (*new_ShoeShop)(struct Shop* self);
    void (*delet)(struct Shop* self);
    void (*add_items)(struct Shop* self);
    int (*in_stock)(struct Shop* self);
    int (*count_items)(struct Shop* self);
    bool (*clear)(struct Shop* self);

};

#endif