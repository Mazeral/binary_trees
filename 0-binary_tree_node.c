#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: The parent of the node
 * @value: The value of the node
 * Return: the address of the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		node->parent = NULL;
		node->n = value;
		node->right = NULL;
		node->left = NULL;
		return (node);
	}

	if (parent->left == NULL)
	{
		node->parent = parent;
		node->n = value;
		node->right = NULL;
		node->left = NULL;
		return (node);
	}

	if (parent->right == NULL)
	{
		node->parent = parent;
		node->n = value;
		node->right = NULL;
		node->left = NULL;
		return (node);
	}
	free(node);
	return (NULL);
}
