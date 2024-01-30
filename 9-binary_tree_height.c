#include "binary_trees.h"

/**
 * binary_tree_height - measure the height
 * @tree: tree
 * Return: height
 */



size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lft = 0;
size_t rght = 0;
if (tree == NULL)
{
return (0);
}
else
{
if (tree)
{
lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
rght = tree->right ? 1 + binary_tree_height(tree->right) : 0;
}
return ((lft > rght) ? lft : rght);
}
}
