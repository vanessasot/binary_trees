#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 is tree is full, or 0 if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int branch_left = 0;
	int branch_right = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
	{
		branch_left = binary_tree_is_full(tree->left);
		branch_right = binary_tree_is_full(tree->right);
		return (branch_left && branch_right);
	}
	else
		return (0);
}
