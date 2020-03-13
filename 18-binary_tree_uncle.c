#include "binary_trees.h"

/**
 * binary_tree_uncle - Entry point
 * Desc: binary_tree_uncle function
 * @node: binary_tree_t type
 * Return: Function that finds the uncle of a node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || (!node->parent) || (!node->parent->parent))
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
