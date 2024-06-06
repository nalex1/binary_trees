#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree using preorder
 * @tree: a tree to traverse
 * @func: a function pointer used by preorder traversal
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

