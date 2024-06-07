#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree);
/**
 * binary_tree_balance - calculated the balance factor of the tree
 * @tree: The tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	long long int  balance_factor = 0;
	size_t left = 0;
	size_t right = 0;

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	balance_factor = left - right;
	if (balance_factor < 0)
		return (balance_factor * -1);
	return (balance_factor);
}

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
