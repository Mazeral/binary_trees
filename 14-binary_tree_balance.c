#include "binary_trees.h"

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
