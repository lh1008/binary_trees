#include "binary_trees.h"

/**
 * binary_tree_inorder - Entry point
 * Desc: binary_tree_inorder function
 * @tree: binary_tree_t type
 * @func: void print func
 * Return: Function that goes through a binary tree using pre-order traversal
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
