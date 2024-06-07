#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: The tree
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->right != NULL)
		binary_tree_delete(tree->right);
	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree != NULL)
		free(tree);
}
