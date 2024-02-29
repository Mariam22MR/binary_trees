#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Rotates a node to the right.
 * @tree: Pointer to the node to rotate.
 *
 * Return: New root of tree.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root, *new_root;

	if (!tree)
		return (NULL);

	if (!tree->right && !tree->left)
		return (tree);

	new_root = tree->left;
	root = tree->parent;
	tree->parent = new_root;
	new_root->parent = root;
	tree->left = new_root->right;
	new_root->right = tree;
	return (new_root);
}
