#include "binary_trees.h"

/**
 * binary_tree_height - Measuring binary tree height.
 * @tree: Ptr to the root node of the selected tree.
 *
 * Return: If tree equal NULL, function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t lt_height = 0, rt_height = 0;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}

lt_height = binary_tree_height(tree->left);
rt_height = binary_tree_height(tree->right);

if (lt_height > rt_height)
{
return (lt_height + 1);
}
else if (rt_height > lt_height)
{
return (rt_height + 1);
}
}
