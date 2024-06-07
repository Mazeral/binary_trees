#include "binary_trees.h"

/**
 * binary_tree_depth - calculated the depth of the tree
 * @tree: The tree
 * Return: The depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = binary_tree_height(tree);
	return (depth - 1);
}
