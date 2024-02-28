#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse binary tree in postorder way.
 * @tree: Tree to traverse.
 * @func: Function handle the traversed node's value.
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
