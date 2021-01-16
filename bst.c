#include "bst.h"
#include <stdlib.h>
#include <stdio.h>

bst_t* get_new_bst() {
    bst_t *new_bst;

    new_bst = (bst_t*)malloc(sizeof(bst_t));

    return new_bst;
}

int insert(bst_t *bst, int data) {
   
    /*
     * allocate a new node
     */

    bst_node_t *new_node;
    bst_node_t *subroot;

    new_node = (bst_node_t*)malloc(sizeof(bst_node_t));
    if (!new_node) {
        fprintf(stderr, "Error allocating new node !\n");
        return -1;
    }
    
    new_node->lchild = NULL;
    new_node->rchild = NULL;
    new_node->parent = NULL;
    new_node->payload = data;

    /*
     * Insert the node into the correct position.
     */

    subroot = bst->root;
        

    /*
     * The tree is empty, let this node be a "root" of any given subtree.
     */
    
    if (!subroot) {
        subroot = new_node;
    }
    else {
        while (!new_node->parent) {
            if (data <= subroot->payload) {
                if (!subroot->lchild) {
                    subroot->lchild = new_node;
                    new_node->parent = subroot;
                }
                else {
                    subroot = subroot->lchild;
                }
            }
            else {
                if (!subroot->rchild) {
                    subroot->rchild = new_node;
                    new_node->parent = subroot;
                }
                else {
                    subroot = subroot->rchild;
                }
            }
        }
    }

    return 0;
}


void print_bst(bst_t *bst) {
    return;
}
 
