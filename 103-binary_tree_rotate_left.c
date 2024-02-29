#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate tree to left
 * @tree: pointer to root of tree need to rotate
 * Return: pointer of new root of tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root, *new_root;

	if (!tree)
		return (NULL);

	if (!tree->right && !tree->left)
		return (tree);

	new_root = tree->right;
	root = tree->parent;
	tree->parent = new_root;
	new_root->parent = root;
	tree->right = new_root->left;
	new_root->left = tree;
	return (new_root);
}
