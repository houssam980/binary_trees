#include "binary_trees.h"

/**
 * binary_tree_is_root - check node if root
 * @node: pointer to node
 * Return: return 1 if node is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL)
return (0);
return (1);
}
