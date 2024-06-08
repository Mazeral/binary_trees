#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
/**
 * binary_tree_balance - calculated the balance factor of the tree
 * @tree: The tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return (int)(binary_tree_size(tree->left) - binary_tree_size(tree->right));
}

/**
 * binary_tree_size - Calculated the size of the binary tree
 * @tree: The tree
 * Return: The size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? binary_tree_size(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_size(tree->right) + 1 : 0;

	return (left_height > right_height ? left_height : right_height);
}
