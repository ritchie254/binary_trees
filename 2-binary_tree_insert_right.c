#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node_2 - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node_2(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = node->right = NULL;
	return (node);
}

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_child;

	if (parent == NULL)
		return (NULL);
	r_child = binary_tree_node_2(parent, value);
	if (r_child == NULL)
		return (NULL);
	r_child->right = parent->right;
	if (r_child->right != NULL)
		r_child->right->parent = r_child;
	parent->right = r_child;
	return (r_child);
}
