#include "binary_trees.h"

/**
 * binary_tree_leaves-Counts the leaves in a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of leaves. if tree is NULL return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		leaves++;
	leaves = leaves + binary_tree_leaves(tree->left);
	leaves = leaves + binary_tree_leaves(tree->right);
	return (leaves);
}
