#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a binary tree's node.
 * @node: Pointer to node binary tree.
 *
 * Return: The uncle of the given node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *uncle;

	if (!node)
		return (NULL);

	parent = node->parent;
	if (!parent)
		return (NULL);

	uncle = parent->parent;
	if (!uncle)
		return (NULL);

	if (!uncle->left || !uncle->right)
		return (NULL);

	if (uncle->left->n == parent->n)
		return (uncle->right);

	else
		return (uncle->left);
}
