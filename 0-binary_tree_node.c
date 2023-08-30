#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - A binary tree node is created
 * @parent: The node parent to create
 * @value: A value to be stored in new node
 * Return: the new node is pointed to
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
