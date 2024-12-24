struct LinkedList {
	int data;
	struct LinkedList * next;
};

struct LinkedList *ll_insert_at_end(struct LinkedList * list,int data);
struct LinkedList *ll_insert_at_start(struct LinkedList * list,int data);
int ll_remove_at_first(struct LinkedList *list,int *returnValue);
int ll_exists(struct LinkedList *list,int key);
int ll_is_empty(struct LinkedList *list);
void ll_printList(struct LinkedList * list);
struct LinkedList* ll_insert_sortedly(struct LinkedList * list,int data);
