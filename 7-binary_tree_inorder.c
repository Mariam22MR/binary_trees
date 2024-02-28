#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse binary tree by inorder way.
 * @tree: Tree to traverse.
 * @func: Function handle the traversed node's value.
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
