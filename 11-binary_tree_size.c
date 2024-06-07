#include "binary_trees.h"

/**
 * binary_tree_size - Calculated the size of the binary tree
 * @tree: The tree
 * Return: The size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return ( 1 + binary_tree_height(tree->right) + binary_tree_height(tree->left));
}
