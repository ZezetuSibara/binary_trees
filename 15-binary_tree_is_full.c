#include "binary_trees.h"

/**
 * binary_tree_is_leaf - a node is checked if it's a leaf
 * @node: points to the node to be check
 * Return: 1 if node is a leaf, and 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_is_full - A binary tree is checked if it's full
 * @tree: points to the tree's root node
 * Return: 1 if full, otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
