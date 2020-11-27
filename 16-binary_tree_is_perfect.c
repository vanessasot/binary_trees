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

	if (!tree || (!tree->left && !tree->right))
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (h_left + 1);
	else
		return (h_right + 1);
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree is NULL, otherwise the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	if (tree)
	{
		size = size + 1;
		size = size + binary_tree_size(tree->left);
		size = size + binary_tree_size(tree->right);
	}
	return (size);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 is tree is perfect, or 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_left = 0;
	int h_right = 0;
	int s_left = 0;
	int s_right = 0;

	if (!tree)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	s_left = binary_tree_size(tree->left);
	s_right = binary_tree_size(tree->right);

	if (h_left == h_right && s_left == s_right)
	{
		return (1);
	}
	return (0);
}
