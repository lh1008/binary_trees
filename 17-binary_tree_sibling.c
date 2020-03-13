#include "binary_trees.h"

/**
 * binary_tree_sibling - Entry point
 * Desc: binary_tree_sibling function
 * @node: binary_tree_t type
 * Return: Function that finds the sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
