#include "binary_trees.h"
/**
 * binary_tree_inorder - tranverse in the binary tree using the inorder algo
 * @tree: The tree
 * @func: function to print the content of the node
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		if (tree != NULL && func)
		{
			binary_tree_inorder(tree->left, func);
			func(tree->n);
			binary_tree_inorder(tree->right, func);
		}
}
