#include "binary_trees.h"

/**
 * array_to_bst - A binary Search Tree from an array is built
 * @array: points to the first element to be converted
 * @size: number of element inarray
 * Description: Ignore value of the array if it already exists.
 * Return: A pointer to the root node, or NULL if fails
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}
	return (root);
}
