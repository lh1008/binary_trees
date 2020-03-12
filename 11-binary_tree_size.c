#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 * Desc: binary_tree_size function
 * @tree: binary_tree_t type
 * Return: Function that measures the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t ct = 0;

	if (!tree)
		return (0);

	ct = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return (ct);
}
