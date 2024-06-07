#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves of the binary tree
 * @tree: The tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left ||  tree->right)
		return (0);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
