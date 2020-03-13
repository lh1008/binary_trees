#include "binary_trees.h"

/**
 * binary_tree_is_full - Entry point
 * Desc: binary_tree_is_full function
 * @tree: binary_tree_t type
 * Return: Function that checks if a binary tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *t;
	int c;

	t = tree;

	if (!tree)
		return (0);

	if (t->left == NULL && t->right == NULL)
		return (1);

	c = (binary_tree_is_full(t->left) && binary_tree_is_full(t->right));

	if ((t->left) && (t->right))
		return (c);

	return (c);
}
