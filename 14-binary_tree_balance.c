#include "binary_trees.h"

/**
 * binary_tree_height_b - Measure height of a binary tree
 * @tree: tree
 * Return: height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
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
lft = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
rght = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
}
return ((lft > rght) ? lft: rght);
}
}

/**
 * binary_tree_balance - Measure balance factor
 * @tree: tree
 * Return: return bl factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int right = 0, left = 0, total = 0;
if (tree)
{
left = ((int)binary_tree_height_b(tree->left));
right = ((int)binary_tree_height_b(tree->right));
total = left - right;
}
return (total);
}
