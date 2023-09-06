#include "binary_trees.h"

/**
 * bst_search -a value in a binary search tree is searched
 * @tree: points to the root node to be searched
 * @value: value to be searched
 * Return: points to the node with a value equal to value, else NULL
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *tmp;

	tmp = (bst_t *)tree;
	while (tmp)
	{
		if (tmp->n == value)
			return (tmp);
		if (tmp->n < value)
			tmp = tmp->right;
		else
			tmp = tmp->left;
	}
	return (NULL);
}
