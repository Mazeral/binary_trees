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
	size_t left_height, right_height;
	if (tree == NULL)
		return (0);
	left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left_height > right_height ? left_height : right_height);
}
