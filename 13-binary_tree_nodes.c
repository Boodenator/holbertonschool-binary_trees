#include "binary_trees.h"

/**
 * binary_tree_nodes - Counting nodes with at least 1 aux in binary tree.
 * @tree: Ptr to the root tree node for counting the number of nodes.
 *
 * Return: If tree is NULL, the function will return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    