#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 * Desc: binary_tree_node function
 * @parent: binary_tree_t type
 * @value: int type
 * Return: Function that creates a binary tree node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_parent;

	new_parent = malloc(sizeof(binary_tree_t));
	if (new_parent == NULL)
		return (NULL);

	new_parent->n = value;
	new_parent->left = NULL;
	new_parent->right = NULL;
	new_parent->parent = parent;

	return (new_parent);
}
