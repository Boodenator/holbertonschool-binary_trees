#include "binary_trees.h"

/**
 * binary_tree_depth - Measureing the depth of a node in a binary tree.
 * @tree: Ptr to the node measureing the depth.
 *
 * Return: If tree = NULL, function will return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL)
{
return (0);
}

while (tree->parent != NULL)
{
depth++;
tree = tree->parent;
}
return (depth);
}
