#include "binary_trees.h"

int _max(int n, int n2);
int _height(const binary_tree_t *tree);

/**
 * binary_tree_height - Entry point
 * Desc: binary_tree_height function
 * @tree: binary_tree_t type
 * Return: Function that returns the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_height(tree) - 1);
}

/**
 * _height - Entry point
 * Desc: _height function
 * @tree: binary_tree_t type
 * Return: Function that measures the height of a binary tree
 */
int _height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	return (1 + _max(_height(tree->left), _height(tree->right)));
}

/**
 * _max - Entry point
 * Desc: _max function
 * @n: int type
 * @n2: int type
 * Return: Function that measures if an int is greater than another one
 */
int _max(int n, int n2)
{
	if (n > n2)
		return (n);
	else
		return (n2);
}
