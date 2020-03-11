#include "binary_trees.h"

/**
 * binary_tree_postorder - Entry point
 * Desc: binary_tree_postorder function
 * @tree: binary_tree_t type
 * @func: void print func
 * Return: Function that goes through a binary tree using post-order traversal
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
