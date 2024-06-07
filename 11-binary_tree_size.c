#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_size - Calculated the size of the binary tree
 * @tree: The tree
 * Return: The size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
