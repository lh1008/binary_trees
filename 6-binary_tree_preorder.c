#include "binary_trees.h"

/**
 * binary_tree_preorder - Entry point
 * Desc: binary_tree_preorder function
 * @tree: binary_tree_t type
 * @func: void print func
 * Return: Function that goes through a binary tree using pre-order traversal
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (!tree || !func)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
