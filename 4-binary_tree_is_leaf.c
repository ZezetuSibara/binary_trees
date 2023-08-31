#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a node is checked if it's a leaf
 * @node: points to the node to be checked
 * Return: 1 if node is a leaf, and 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
