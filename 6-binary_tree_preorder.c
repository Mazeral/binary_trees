#include "binary_trees.h"
/**
 * binary_tree_preorder - tranverse in the binary tree using the pre_order algo
 * @tree: The tree
 * @func: function to print the content of the node
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
		if (tree != NULL && func)
		{
			func(tree->n);
			binary_tree_preorder(tree->left, func);
			binary_tree_preorder(tree->right, func);
		}
}
