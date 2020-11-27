#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of tree to measure the height.
 *
 * Return: 0 if tree is NULL, otherwise the height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (!tree)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of nodes. if tree is NULL return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int b_left = 0;
	int b_right = 0;

	if (!tree)
		return (0);

	b_left = binary_tree_height(tree->left);
	b_right = binary_tree_height(tree->right);

	return (b_left - b_right);
}
