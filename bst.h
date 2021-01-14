#ifndef BST_H
#define BST_H

typedef struct bst_node_ {
    struct bst_node_ *lchild;
    struct bst_node_ *rchild;
    struct bst_node_ *parent;
    int payload;
} bst_node_t;

typedef struct bst_ {
    bst_node_t root;
} bst_t;

int insert(int data);		/* return 0 is successful insert, -1 if unsuccessful insert */

#endif
