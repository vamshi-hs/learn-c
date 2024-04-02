#include <stdlib.h>

struct ArrayList{
    int *data;
    size_t capacity;
    size_t len;
};

struct ArrayList al_new(int new_value);
void al_push(struct ArrayList *alist,int new_value);
void al_print(struct ArrayList alist);
int al_pop(struct ArrayList *alist,int *returnValue);
void al_insert_at(struct ArrayList *alist,int index,int newValue);
struct ArrayList al_empty_new();
void al_free(struct ArrayList *alist);
int al_is_empty(struct ArrayList alist);
int al_get_i(struct ArrayList alist,int index,int *returnValue);
void al_replace_at(struct ArrayList *alist,int index,int new_value);
void al_remove_at(struct ArrayList *alist,int index);
