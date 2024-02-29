#include "binary_trees.h"

/**
 * array_to_bst - Convert array to BST.
 * @array: Pointer to begin of array.
 * @size: The size of array.
 *
 * Return: Pointer to root of tree.
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	if (!array)
		return (NULL);
	{
		for (i = 0; i < size; i++)
		{
			bst_insert(&root, *(array + i));
		}
	}
	return (root);
}
