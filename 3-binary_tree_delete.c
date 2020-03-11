#include "binary_trees.h"

/**
 * binary_tree_delete - Entry point
 * Desc: binary_tree_delete function
 * @tree: binary_tree_t type
 * Return: Function that deletes an entire binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
