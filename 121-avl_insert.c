#include "binary_trees.h"

/**
 * check_balance - The balance of each node is checked
 * @node: Points to the actual node
 * @value: the value to input
 * Return: void
 */
void check_balance(avl_t **node, int value)
{
	int balance;

	balance = binary_tree_balance(*node);

	if (balance > 1 && value < (*node)->left->n)
	{
		*node = binary_tree_rotate_right(*node);
		return;
	}

	if (balance < -1 && value > (*node)->right->n)
	{
		*node = binary_tree_rotate_left(*node);
		return;
	}

	if (balance > 1 && value > (*node)->left->n)
	{
		(*node)->left = binary_tree_rotate_left((*node)->left);
		*node = binary_tree_rotate_right(*node);
		return;
	}

	if (balance < -1 && value < (*node)->right->n)
	{
		(*node)->right = binary_tree_rotate_right((*node)->right);
		*node = binary_tree_rotate_left(*node);
		return;
	}
}

/**
 * avl_in - used to see if the node is inserted
 * @tree: The actual root of the tree
 * @value: The actual node value
 * Return: The Pointer of the new node
 */
avl_t *avl_in(avl_t **tree, int value)
{
	avl_t *node;

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
			return ((*tree)->left);
		}
		else
		{
			node = avl_in(&((*tree)->left), value);
			if (node)
				check_balance(tree, value);
			return (node);
		}
	}

	if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
			return ((*tree)->right);
		}
		else
		{
			node = avl_in(&((*tree)->right), value);
			if (node)
				check_balance(tree, value);
			return (node);
		}
	}

	return (NULL);
}

/**
 * avl_insert - A value in a AVL Tree is inserted
 * @tree: The actual root of the tree
 * @value: The actual node value
 * Return: The Pointer of the new node
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	avl_t *node;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}

	node = avl_in(tree, value);

	return (node);
}
