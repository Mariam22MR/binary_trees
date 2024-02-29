#include "binary_trees.h"



/**
 * get_height - Get height of a binary tree.
 * @tree: Pointer to root of tree.
 *
 * Return: Height of binary tree.
 */

int get_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
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

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + get_height(tree->left);
	if (tree->right)
		right_height = 1 + get_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_is_full - Check if binary tree is full or not.
 * @tree: Pointer of root binary tree.
 *
 * Return: 1 if is full or 0 if is not full.
 */

int binary_is_full(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	left_height = binary_is_full(tree->left);
	right_height = binary_is_full(tree->right);

	if (left_height && right_height)
		return (1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - check if binary tree is perfect or not
 * @tree: pointer to root of binary tree
 * Return: 0 if not perfect and 1 if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_is_full(tree))
	{
		if (binary_tree_balance(tree) == 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
