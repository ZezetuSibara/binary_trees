#include "binary_trees.h"

/**
 * binary_tree_preorder - Is used to go through a binary tree
 * @tree: points to the tree's root node
 * @func: points to a function to call.
 * The value in the node must be passed as a parameter
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
