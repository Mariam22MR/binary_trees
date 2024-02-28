#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse binary tree through preorder way.
 * @tree: Tree to traverse.
 * @func: Function handle traversed node's value.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
