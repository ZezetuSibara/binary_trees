#include "binary_trees.h"

/**
 * binary_tree_uncle - an uncle node is found
 * @node: points to the node used to find the uncle
 * Return: points to the uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
