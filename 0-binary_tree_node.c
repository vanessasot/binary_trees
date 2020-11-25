#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree new node.
 * @parent: Pointer to the parent node.
 * @value: Value of the new node.
 *
 * Return: Pointer to new node, NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
