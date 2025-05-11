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

 binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}