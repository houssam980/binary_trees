#include "binary_trees.h"
/**
 * tree_is_perfect - check if tree is perfect
 * @tree: tree to check
 * Return: return 0 if not perfect
 */
int tree_is_perfect(const binary_tree_t *tree)
{
int lft = 0, rght = 0;
if (tree->left && tree->right)
{
lft = 1 + tree_is_perfect(tree->left);
rght = 1 + tree_is_perfect(tree->right);
if (rght == lft && rght != 0 && lft != 0)
return (rght);
return (0);
}
else if (!tree->left && !tree->right)
{
return (1);
}
else
{
return (0);
}
}
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int result = 0;
if (tree == NULL)
{
return (0);
}
else
{
result = tree_is_perfect(tree);
if (result != 0)
{
return (1);
}
return (0);
}
}
