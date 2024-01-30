#include "binary_trees.h"

/**
 * binary_tree_preorder - through a binary tree using pre-order traversal
 * @tree: pointer to tree
 * @func: pointer to function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
