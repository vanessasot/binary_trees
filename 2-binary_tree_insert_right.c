#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child.
 * @parent: Pointer to the node to insert the right-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to new node, NULL on failure or is parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child = NULL;

	if (!parent)
		return (NULL);

	new_child = malloc(sizeof(binary_tree_t));

	if (!new_child)
		return (NULL);

	new_child->parent = parent;
	new_child->n = value;
	new_child->left = NULL;

	if (parent->right)
	{
		parent->right->parent = new_child;
		new_child->right = parent->right;
	}
	else
	{
		parent->right = new_child;
		new_child->right = NULL;
	}
	parent->right = new_child;
	return (new_child);
}
