#include "binary_trees.h"

/**
 * binary_tree_delete - Delete a binary tree
 * @tree: pointer to root of tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
if (tree != NULL)
{
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
}
