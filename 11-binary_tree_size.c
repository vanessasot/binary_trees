#include "binary_trees.h"

/**
 * enume - Counts the size.
 * @node: Pointer to node of the tree.
 * @size: Size of the tree.
 *
 * Return: Nothing.
 */
void enume(const binary_tree_t *node, size_t *size)
{
	if (node)
	{
		*size = *size + 1;
		enume(node->left, size);
		enume(node->right, size);
	}
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
	{
		return (0);
	}
	else
	{
		size = size + 1;
		enume(tree->left, &size);
		enume(tree->right, &size);
	}
	return (size);
}
