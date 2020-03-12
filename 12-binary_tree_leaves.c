#include "binary_trees.h"

/**
 * binary_tree_leaves - Entry point
 * Desc: binary_tree_leaves function
 * @tree: binary_tree_t type
 * Return: Function that counts the leaves in a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ct = 0;
	const binary_tree_t *t;

	t = tree;

	if (!tree)
		return (0);

	if (t->left == NULL && t->right == NULL)
		return (1);
	ct = binary_tree_leaves(t->left) + binary_tree_leaves(t->right);

	return (ct);
}
