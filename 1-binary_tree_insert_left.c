#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL) {
        return NULL;  // Cannot insert if parent is NULL
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        return NULL;  // Memory allocation failed
    }

    // If parent already has a left child, make it the new node's left child
    if (parent->left != NULL) {
        new_node->left = parent->left;
        new_node->left->parent = new_node;  // Update parent pointer
    }

    parent->left = new_node;
    return new_node;
}
