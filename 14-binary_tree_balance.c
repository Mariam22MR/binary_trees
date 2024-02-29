#include "binary_trees.h"

/**
 * get_height - Get height of a binary tree.
 * @tree: Pointer to root of tree.
 *
 * Return: Height of binary tree.
 */

int get_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (0);

	left_height = get_height(tree->left);
	right_height = get_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}

/**
 * binary_tree_balance - Computes the balance factor of binary tree.
 * @tree: pointer root of binary tree.
 *
 * Return: Balance factor of the given binary tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = 1 + get_height(tree->left);
	if (tree->right)
		right_height = 1 + get_height(tree->right);

	return (left_height - right_height);
}
