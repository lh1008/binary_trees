#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Entry point
 * Desc: binary_tree_is_leaf function
 * @node: binary_tree_t type
 * Return: Function that checks if a node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);

}
