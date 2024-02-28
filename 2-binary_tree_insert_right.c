#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts node as right child to this parent node.
 * @parent: Parent of the new binary tree node.
 * @value: Value of the new node to be inserted.
 *
 * Return: Ponter to new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);
	{
		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);
		{
			new_node->left = NULL;
			new_node->right = parent->right;
			new_node->parent = parent;
			new_node->n = value;
			if (parent->right != NULL)
			{
				parent->right->parent = new_node;
			}
			parent->right = new_node;
		}
	}
	return (new_node);
}
