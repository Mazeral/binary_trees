#include "binary_trees.h"

/**
 * binary_tree_nodes - countes the nodes of a binary tree
 * @tree: the tree
 * Return: the number of nodes*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
		return (1);
	if (tree == NULL)
		return (0);
	return (binary_tree_nodes(tree));
}
