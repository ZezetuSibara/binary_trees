#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A node is checked if it is a leaf
 * @node: points to the node to be checked
 * Return: 1 if node is a leaf, and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_leaves - The leaves in a binary tree are calculated
 * @tree: points to the root node
 * Description: A pointer that is NULL is not a leaf
 * Return: A total number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	return (left + right);
}
