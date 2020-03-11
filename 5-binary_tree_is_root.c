#include "binary_trees.h"

/**
 * binary_tree_is_root - Entry point
 * Desc: binary_tree_is_root function
 * @node: binary_tree_t type
 * Return: Function that checks if a node is root
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);

}
