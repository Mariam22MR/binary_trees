#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if node is leaf node or not
 * @node: Pointer node to check.
 *
 * Return: 1 if node is leaf node & 0 if not leaf.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
