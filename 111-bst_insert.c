#include "binary_trees.h"

/**
 * bst_insert - a value in Binary Search Tree is inserted
 * @tree: double pointer to the root node
 * @value: value to store in the node
 * Description: If the value is already present in the tree, it must
 * be ignored
 * Return: Pointer to created node, or NULL if failed
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tmp;

	if (tree)
	{
		if (*tree == NULL)
		{
			*tree = (bst_t *)binary_tree_node(NULL, value);
			return (*tree);
		}
		tmp = *tree;
		while (tmp)
		{
			if (tmp->n == value)
				break;
			if (tmp->n > value)
			{
				if (!tmp->left)
				{
					tmp->left = (bst_t *)binary_tree_node(tmp, value);
					return (tmp->left);
				}
				tmp = tmp->left;
			}
			else if (tmp->n < value)
			{
				if (!tmp->right)
				{
					tmp->right = (bst_t *)binary_tree_node(tmp, value);
					return (tmp->right);
				}
				tmp = tmp->right;
			}
		}
	}
	return (NULL);
}
