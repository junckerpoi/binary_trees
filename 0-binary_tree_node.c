#include <stdlib.h>

typedef struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (node == NULL) {
        return NULL;  // Memory allocation failed
    }

    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;

    return node;
}
