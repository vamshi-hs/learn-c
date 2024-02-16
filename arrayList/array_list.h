#include <stdlib.h>

struct ArrayList{
    int *data;
    size_t capacity;
    size_t len;
};

struct ArrayList al_new(int new_value);
void al_push(struct ArrayList *alist,int new_value);
void al_print(struct ArrayList alist);
int al_pop(struct ArrayList *alist);
