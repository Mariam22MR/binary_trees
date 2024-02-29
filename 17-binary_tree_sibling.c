#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a binary tree's node.
 * @node: Pointer to node in binary tree.
 *
 * Return: Pointer to sibling or NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (!node->parent->left || !node->parent->right)
		return (NULL);

	if (node->parent->right->n == node->n)
		return (node->parent->left);
	else
		return (node->parent->right);
}
