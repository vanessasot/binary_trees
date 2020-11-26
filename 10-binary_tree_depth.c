#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL, otherwise the depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_tree = 0;

	if (!tree || !tree->parent)
		return (0);

	depth_tree = binary_tree_depth(tree->parent);

	return (depth_tree + 1);
}
