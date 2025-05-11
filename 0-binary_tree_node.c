#include "binary_trees.h"

/**
 * binary_tree_node - new binary tree node creation.
 * @parent: Ptr to parent of the newly node.
 * @value: The inserted value in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Else - ptr to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		return (NULL);
	}


	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
