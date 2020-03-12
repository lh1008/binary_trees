#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry point
 * Desc: binary_tree_nodes function
 * @tree: binary_tree_t type
 * Return: Function that counts the nodes with at least 1
 * child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;
	const binary_tree_t *t;

	t = tree;

	if (!tree)
		return (0);

	count += binary_tree_nodes(t->left);
	count += binary_tree_nodes(t->right);

	if ((!t->left && t->right) || (t->left && !t->right))
		count++;
	if (t->left && t->right)
		count++;

	return (count);
}
