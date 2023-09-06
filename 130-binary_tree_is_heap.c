#include "binary_trees.h"

/**
 * binary_tree_is_heap - A binary tree validity is checked
 * @tree: Points to the tree's root node
 * Return: 1 if tree is valid, 0 if tree is NULL, and 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btih_helper(tree));
}

/**
 * btih_helper - A binary tree validity is checked
 * @tree: Points to the tree's root node
 * Return: 1 if tree is valid, 0 if tree is NULL, and 0 otherwise
 */
int btih_helper(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (!binary_tree_is_complete(tree))
		return (0);

	if (tree->left)
		if (tree->left->n > tree->n)
			return (0);
	if (tree->right)
		if (tree->right->n > tree->n)
			return (0);

	return (btih_helper(tree->left) &&
		btih_helper(tree->right));
}

/**
 * binary_tree_is_complete - A binary tree completeness is checked
 * @tree: Points to the tree's root node
 * Return: 1 if tree is complete, 0 if tree incomplete, otherwise NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - A binary tree completeness is checked
 * @tree: Points to the tree's root node 
 * @index: the actual node index to be checked
 * @size: the actual number of tree nodes
 * Return: 1 if the tree is complete, 0 if the tree is incomplete
 *         0 if tree is NULL
 */
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - a binary tree's size is measured
 * @tree: tree's size to be measured
 * Return: The tree's size, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
