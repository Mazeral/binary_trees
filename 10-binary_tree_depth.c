#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_depth - calculated the depth of the tree
 * @tree: The tree
 * Return: The depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = binary_tree_height(tree);

	if (tree)
		depth = tree->parent ? binary_tree_height(tree->parent) + 1 : 0;
	return (depth);
}
