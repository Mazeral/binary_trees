#include "binary_trees.h"
/**
 * binary_tree_postorder - tranverse in the binary tree using postorder algo
 * @tree: The tree
 * @func: function to print the content of the node
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		if (tree != NULL && func)
		{
			binary_tree_postorder(tree->left, func);
			binary_tree_postorder(tree->right, func);
			func(tree->n);
		}
}
