#include "binary_trees.h"

/**
 * binary_tree_leaves - Counting the leaves in binary tree.
 * @tree: Ptr to the root tree node for counting the leaves.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t counter;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
counter++;
}
counter += binary_tree_leaves(tree->left);
counter += binary_tree_leaves(tree->right);
return (counter);
}

