#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaf = 0, lft = 0, rght = 0;
if (tree == NULL)
{
return (0);
}
else
{
lft = binary_tree_leaves(tree->left);
rght = binary_tree_leaves(tree->right);
leaf = lft + rght;
return ((!lft && !rght) ? leaf + 1 : leaf + 0);
}
}
