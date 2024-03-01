#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: pointer to the node to measure the depth of
 *
 * Return: depth of a node in a binary tree.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t track_count = 0;

	if (node == NULL)
		return (track_count);
	while (node->parent != NULL)
	{
		track_count++;
		node = node->parent;
	}
	return (track_count);
}
