#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node a root or not
 * @node: The node to check
 * Return: 1 If root, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	return (0);
}
