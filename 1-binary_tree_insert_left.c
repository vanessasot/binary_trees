#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to new node, NULL on failure or is parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child = NULL;
	binary_tree_t *temp = NULL;

	if (!parent)
		return (NULL);

	new_child = malloc(sizeof(binary_tree_t));

	if (!new_child)
		return (NULL);

	new_child->parent = parent;
	new_child->n = value;
	new_child->right = NULL;

	if (parent->left)
	{
		temp = parent->left;
		parent->left = new_child;
		new_child->left = temp;
		temp->parent = new_child;
	}
	else
	{
		parent->left = new_child;
		new_child->left = NULL;
	}

	return (new_child);
}
