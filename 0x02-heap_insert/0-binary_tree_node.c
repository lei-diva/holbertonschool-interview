#include <stdlib.h>
#include "binary_trees.h"


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {


    binary_tree_t *node;

    node = malloc(sizeof(binary_tree_t));

    if (!node) {
        return(NULL);
    }
    node->n = value;
    node->parent = parent;
    node->right = NULL;
    node->left = NULL;

    if (!parent)
    {
        parent = node;
    }
    else if (parent->n >= node->n) {
        parent->left = node;
    }
    else {
        parent->right = node;
    }

    return(node);
}
