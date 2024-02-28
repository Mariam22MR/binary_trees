#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at least 1 child in binary tree.`
 * @tree: Pointer of root of tree.
 *
 * Return: Number of nodes at least on child.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node = 0, right_node = 0;

	if (tree == NULL)
		return (0);

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (right_node + left_node);
	else
		return (1 + right_node + left_node);
}
