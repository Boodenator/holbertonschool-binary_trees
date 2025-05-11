#include "binary_trees.h"

/**
 * binary_tree_insert_left - node insertion as left-aux
 * into other in a binary tree.
 * @parent: ptr to node for inserttion of left-aux.
 * @value: The new node stored vlaue.
 *
 * Return: If parent is NULL or error happens - NULL.
 *         Otherwise - new ptr to the new node.
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

if (parent->left != NULL)
{
	node->left = parent->left;
	parent->left->parent = node;
}

parent->left = node;

return (node);
}
