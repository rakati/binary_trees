#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree in inorder and apply func
 * on value of visited node.
 *
 * @tree: Pointer to the root node
 * @func: Pointer to a function that takes an integer.
 *
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
