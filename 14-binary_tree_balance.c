#include "binary_trees.h"

/**
 * binary_tree_balance - Measureing factor of balance in binary tree.
 * @tree: Ptr to root tree node for measurement of balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int balance;
if (tree != NULL)
{
return (balance = binary_tree_height(tree->left) -
binary_tree_height(tree->right));
}
return (0);
}

