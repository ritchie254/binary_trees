#include "binary_trees.h"
#include<stdlib.h>
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: input value
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = calloc(1, sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
