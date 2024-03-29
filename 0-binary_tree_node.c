#include "binary_trees.h"

/**
 * binary_tree_node - Create new node in ninary tree.
 * @parent: pointer to parent of node.
 * @value: Value of new binary tree node.
 *
 * Return: pointer for new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	new_node->n = value;

	return (new_node);
}
