#include "binary_trees.h"

/**
 * binary_tree_uncle - get uncle of given node
 * @node: pointer to node
 * Return: pointer of uncle of node
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
