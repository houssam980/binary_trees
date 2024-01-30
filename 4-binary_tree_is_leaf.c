#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is leaf
 * @node: pointer to node
 * Return: -1 if is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
return (0);
return (1);
}
