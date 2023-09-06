#include "binary_trees.h"

/**
 * array_to_avl - An AVL tree from an array is created.
 * @array: The actual values of the array.
 * @size: The actual array length.
 * Return: A pointer to the AVL tree, else NULL.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t i;
	avl_t *root = NULL;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			avl_insert(&root, *(array + i));
		}
	}
	return (root);
}
