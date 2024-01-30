#include "binary_trees.h"
/**
 * binary_tree_size - return the size of a tree
 * @tree: tree
 * Return: tree size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0, rght = 0, lft = 0;
if (tree == NULL)
{
return (0);
}
else
{
lft = binary_tree_size(tree->left);
rght = binary_tree_size(tree->right);
size = rght + lft + 1;
}
return (size);
}
