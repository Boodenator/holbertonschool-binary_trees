#include "binary_trees.h"

/**
 * binary_tree_insert_right - node insertion as right-aux
 * into other in a binary tree.
 * @parent: ptr to node for inserttion of left-aux.
 * @value: The new node stored vlaue.
 *
 * Return: If parent is NULL or error happens - NULL.
 *         Otherwise - new ptr to the new node.
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

node = malloc(sizeof(*node));
if (node == NULL)
{
	return (NULL);
}

node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;

if (parent->right != NULL)
{
	node->right = parent->right;
	parent->right->parent = node;
}

parent->right = node;

return (node);
}
