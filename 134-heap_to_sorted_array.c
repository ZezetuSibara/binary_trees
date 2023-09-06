#include "binary_trees.h"

/**
 * _realloc - A memory block is reallocated
 * @ptr: the previous memory block is pointed to
 * @old_size: The old memory block size
 * @new_size: The new memory block size
 * Return: Pointer to a new memory block otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size = old_size < new_size ? old_size : new_size;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < min_size; i++)
				*((char *)new_ptr + i) = *((char *)ptr + i);
			free(ptr);
			return (new_ptr);
		}
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
}

/**
 * heap_to_sorted_array - Asorted array  is created from a max binary heap tree.
 * @heap: the max binary heap is pointed to.
 * @size: the resulting array's size value is pointed to .
 * Return: The pointer to an array, otherwise NULL.
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *array = NULL;
	heap_t *root;
	int val;
	size_t n = 0;

	if (heap != NULL)
	{
		root = heap;
		while (root != NULL)
		{
			val = heap_extract(&root);
			array = _realloc(array, sizeof(int) * n, sizeof(int) * (n + 1));
			*(array + n) = val;
			n++;
		}
	}
	if (size != NULL)
		*size = n;
	return (array);
}
