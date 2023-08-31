#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a right-rotation is perfomed on a binary tree
 * @tree: points to the tree's root node
 * Return: points to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	tree->parent = tree->left;
	if (tree->left)
	{
		tree->left = tree->left->right;
		tree->parent->right = tree;
		tree->parent->parent = NULL;
		if (tree->left)
			tree->left->parent = tree;
		return (tree->parent);
	}
	return (tree);
}
