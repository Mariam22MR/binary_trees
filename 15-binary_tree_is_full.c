#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if binary tree full.
 * @tree: Pointer of root binary tree.
 *
 * Return: 1 if is full or 0 if is not full.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	left_height = binary_tree_is_full(tree->left);
	right_height = binary_tree_is_full(tree->right);

	if (left_height && right_height)
		return (1);
	else
		return (0);
}
