#include "binary_trees.h"
#include <stdio.h>

/**
 * greater_than - are values in the tree are greater than a value
 * @tree: points to the tree to be checked
 * @val: a value to be checked against
 * Return: 1 if true, then if false return 0
 */
int greater_than(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);
	if (tree->n > val)
	{
		l = greater_than(tree->left, val);
		r = greater_than(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * less_than - are values in the tree less than a specific value
 * @tree: points to the tree to be checked
 * @val: a value to be checked against
 * Return: 1 if true, then if false return 0
 */
int less_than(const binary_tree_t *tree, int val)
{
	int l, r;

	if (tree == NULL)
		return (1);
	if (tree->n < val)
	{
		l = less_than(tree->left, val);
		r = less_than(tree->right, val);
		if (l && r)
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_bst - a binary tree is checked if it is valid
 * @tree: points to the root node
 * Return: 1 if tree is a valid, and 0 if otherwise.
  */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (less_than(tree->left, tree->n) && greater_than(tree->right, tree->n))
	{
		if (!tree->left || binary_tree_is_bst(tree->left))
		{
			if (!tree->right || binary_tree_is_bst(tree->right))
				return (1);
		}

	}
	return (0);
}
