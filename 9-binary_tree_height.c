#include "binary_trees.h"

/**
 * binary_tree_height - Height of binary tree.
 * @tree: pointer to tree node.
 *
 * Return: Height of binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
