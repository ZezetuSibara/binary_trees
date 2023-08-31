#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_left - A node as the left-child of another node is inserted
 * @parent: points to the node to insert
 * @value: the actual value to store
 * Description: If parent already has a left-child, the new node must take its
 * place.
 * Return: points to the created node, otherwise NULL if it fails
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);
	left_child->left = parent->left;
	if (left_child->left != NULL)
		left_child->left->parent = left_child;
	parent->left = left_child;
	return (left_child);
}
