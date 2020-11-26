#include "binary_trees.h"

/**
 * enum_leaf - Counts the number of leaves.
 * @node: Pointer to the node to count leaves.
 * @leaves: Number of leaves.
 *
 * Return: Nothing.
 */

void enum_leaf(const binary_tree_t *node, size_t *leaves)
{
	if (!node->left && node->right)
	{
		*leaves = *leaves + 1;
	}
	if (node->left)
		enum_leaf(node->left, leaves);
	if (node->right)
		enum_leaf(node->right, leaves);
}
