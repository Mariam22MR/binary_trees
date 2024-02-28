#include "binary_trees.h"

/**
 * binary_tree_leaves - Git number of leaves of binary tree.
 * @tree: pointer to root of tree.
 *
 * Return: Number of leaves of tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
		return (0);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1 + right_leaves + left_leaves);
	else
		return (right_leaves + left_leaves);
}
