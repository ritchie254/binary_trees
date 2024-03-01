#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node_1 - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value
 *
 * Return: pointer
 */
binary_tree_t *binary_tree_node_1(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = new_node->right = NULL;
	return (new_node);
}

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert
 * @value: value
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_child;

	if (parent == NULL)
		return (NULL);
	l_child = binary_tree_node_1(parent, value);
	if (l_child == NULL)
		return (NULL);
	l_child->left = parent->left;
	if (l_child->left != NULL)
		l_child->left->parent = l_child;
	parent->left = l_child;
	return (l_child);
}
