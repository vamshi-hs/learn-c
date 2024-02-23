struct AVL
{
    int data;
    int height;
    struct  AVL * left;
    struct  AVL * right;
    /* data */
};

void avl_inorderPrint(const struct AVL *tree);
void avl_preorderPrint(const struct AVL *tree);
void avl_postorderPrint(const struct AVL *tree);
struct AVL * avl_insert(struct AVL* tree,int newValue);
struct AVL * avl_leftBalance(struct AVL * tree);
struct AVL * avl_rightBalance(struct AVL * tree);
int avl_getBalance(const struct AVL* tree);
int avl_getHeight(const struct AVL* tree);