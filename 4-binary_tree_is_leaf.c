#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checking if the node is leaf of binary tree.
 * @node: Ptr to check the node.
 *
 * Return: If the node is a leaf - 1.
 *         Else - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
{
return (0);
}

return (1);
}
