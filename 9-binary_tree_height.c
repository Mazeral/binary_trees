#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: the tree
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return ( 1 + fmax(binary_tree_height(tree->right), binary_tree_height(tree->left)));
}
