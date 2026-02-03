#include "ShoeShop.h"
#include <stdbool.h>

// ny constructor med malloc
void new_ShoeShop(struct ShoeShop* s, int x ){
    s->shelf = malloc(sizeof(*s->shelf) *x);
    s->size = x;
    for (int i = 0; i <= x; i++){
        s->shelf[i] = 0;
    }
}

// destructor med free
void delet(struct ShoeShop* s){
    free(s->shelf);
    s->size = 0;
}

// tilføjer flere items på en row
void add_items(struct ShoeShop *s, int row, int num){
    s->shelf[row] += num;
}

// Fortæller hvor mange items der er på en row
int in_stock(struct ShoeShop *s, int row){
    return s->shelf[row]
}

// Returner hvor mange items der er i butikken
int count_items(struct ShoeShop *s){
    int total;
    for(int i = 0; i < s->size; i++){
        total += s->shelf[i];
    }
    return total;
}

// fjerner alle sko fra en hylde og returner om der var sko på hylden før de blev fjernet.
bool clear(struct ShoeShop *s, int row){
    bool rem = s->shelf[row] > 0;
    s->shelf[row] = 0;
    return rem;
}






