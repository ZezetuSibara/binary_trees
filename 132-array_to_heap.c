#include "binary_trees.h"

/**
 * array_to_heap - A Max Binary Heap tree is built
 * @array: Points to the first element
 * @size: The actual number of elements in the array
 * Return: Pointer to the root node, and NULL if fails
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
