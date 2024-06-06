#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: a poiter to the node to insert the right child in
 * @value: is the value to store in the new node
 * Return: pointer to the new node or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}

