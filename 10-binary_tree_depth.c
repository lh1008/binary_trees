#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 * Desc: binary_tree_depth function
 * @tree: binary_tree_t type
 * Return: Function that measures the depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		count = binary_tree_depth(tree->parent) + 1;

	return (count);
}
