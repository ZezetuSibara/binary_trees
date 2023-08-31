#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_delete - an entire binary tree is deleted
 * @tree: points to the tree's root node
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
