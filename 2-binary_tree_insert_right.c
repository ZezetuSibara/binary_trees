#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - A node as the right-child is inserted 
 * @parent: points to the node used to insert
 * @value: the actual value to store
 * Description: If parent already has a right-child, the new node must take its
 * place
 * Return: points to the created node, otherwise NULL if it fails
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);
	right_child->right = parent->right;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;
	return (right_child);
}
