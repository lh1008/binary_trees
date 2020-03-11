#include "binary_trees.h"

/**
 * binary_tree_insert_right - Entry point
 * Desc: binary_tree_insert_right function
 * @parent: binary_tree_t type
 * @value: int type
 * Return: Function that inserts a node as the right-child of another node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_nd;

	if (parent == NULL)
		return (NULL);
	right_nd = malloc(sizeof(binary_tree_t));
	if (right_nd == NULL)
		return (NULL);

	right_nd->n = value;
	right_nd->parent = parent;
	right_nd->left = NULL;
	right_nd->right = NULL;
	if (parent->right != NULL)
	{
		right_nd->right = parent->right;
		parent->right->parent = right_nd;
	}
	parent->right = right_nd;

	return (right_nd);
}
