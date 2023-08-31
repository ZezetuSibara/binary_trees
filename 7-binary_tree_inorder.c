#include "binary_trees.h"

/**
 * binary_tree_inorder - used to go through a binary tree
 * @tree: points to the tree's root node
 * @func: points to a function to call.
 * The value in the node must be passed as a parameter
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
