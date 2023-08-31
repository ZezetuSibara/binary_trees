#include "binary_trees.h"

/**
 * binary_tree_depth - the depth of a node is measured
 * @node: points to the node to be measured
 * Return: if depth of a node is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL)
		return (count);
	while (node->parent != NULL)
	{
		count++;
		node = node->parent;
	}
	return (count);
}
