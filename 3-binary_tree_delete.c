#include "binary_trees.h"
void delete_subtree(binary_tree_t *node);
/**
 * binary_tree_delete - deletes an entire tree
 * @tree: a pointer to the root node of the tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	delete_subtree(tree);
}

/**
 * delete_subtree - deletes a subtree
 * @node: a pointer to the root node of the subtree to delete
 * Return: void
 */

void delete_subtree(binary_tree_t *node)
{
	if (node == NULL)
		return;
	delete_subtree(node->left);
	delete_subtree(node->right);
	free(node);
}

