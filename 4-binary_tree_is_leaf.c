#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a recursive function that checks if there's a leaf
 * @node: The node to check
 * Return: 1 if there it is a leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
