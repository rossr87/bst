#include "bst.h"
#include <stdio.h>

int main() {
    
    bst_t *my_tree = get_new_bst();

    if (!my_tree) {
        fprintf(stderr, "Error allocating a new BST.\n");
    }
    else {
        fprintf(stderr, "Success! Tree allocated.\n");
    }

    insert(my_tree, 3);
    insert(my_tree, 2);
    insert(my_tree, 1);

    print_bst(my_tree);
    return 0;
}
