#include "binary_trees.h"

/**
 * binary_tree_sibling - A node's sibling is found
 * @node: points to the node used to find the sibling
  Return: points to the sibling node, otherwise NULL if no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
