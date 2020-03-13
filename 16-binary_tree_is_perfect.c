#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree);
int _max(int n, int n2);
int _height(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
int _pow_recursion(int x, int y);

/**
 * binary_tree_is_perfect - Entry point
 * Desc: binary_tree_is_perfect function
 * @tree: binary_tree_t type
 * Return: Function that checks if a binary tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth, leaves;

	if (!tree)
		return (0);

	depth = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);

	if (leaves == _pow_recursion(2, depth))
		return (1);
	else
		return (0);
}

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

/**
 * _pow_recursion - Entry point
 * Desc: _pow_recursion
 * @x: int type
 * @y: int type
 * Return: Function that returns the value of `x` raised to the power of `y`.
 **/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
