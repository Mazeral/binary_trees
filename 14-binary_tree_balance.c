#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - calculated the balance factor of the tree
 * @tree: The tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	return ((int)((binary_tree_height(tree->left) -
	binary_tree_height(tree->right))));
}

/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: the tree to measure the height of
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
