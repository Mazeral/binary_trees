#include "binary_trees.h"
#include <string.h>


void new_left_child(binary_tree_t **parent, binary_tree_t **new_node);

/**
 * binary_tree_insert_left - inserts a left node to a node in the tree
 * @parent: The parent node of the node
 * @value: the value of the inserted node
 * Return: The address of the new node in success, NULL in failure
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = new_node;
	}
	else
	{
		new_left_child(&parent, &new_node);
	}

	return (new_node);
}

/**
 * new_left_child - makes the parent a left child of the new node
 * @old: The original parent node
 * @new_node: The new parent node and the new node
 * Return: Nothing
 */
void new_left_child(binary_tree_t **old, binary_tree_t **new_node)
{
	(*new_node)->left = (*old)->left;
	if ((*old)->left != NULL)
	{
		(*old)->left->parent = *new_node;
	}
	(*old)->left = *new_node;
}
