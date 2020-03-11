#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 * Desc: binary_tree_insert_left function
 * @parent: binary_tree_t type
 * @value: int type
 * Return: Function that inserts a node as the left-child of another node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_nd;

	if (parent == NULL)
		return (NULL);
	left_nd = malloc(sizeof(binary_tree_t));
	if (left_nd == NULL)
		return (NULL);

	left_nd->n = value;
	left_nd->parent = parent;
	left_nd->left = NULL;
	left_nd->right = NULL;
	if (parent->left != NULL)
	{
		left_nd->left = parent->left;
		parent->left->parent = left_nd;
	}
	parent->left = left_nd;

	return (left_nd);
}
