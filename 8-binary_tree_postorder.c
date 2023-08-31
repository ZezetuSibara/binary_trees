#include "binary_trees.h"

/**
 * binary_tree_postorder - used to go through a binary tree
 * @tree: points to the tree's root node
 * @func: points to a function to call.
 * The value must be passed as a parameter
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
