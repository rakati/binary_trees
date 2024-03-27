#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree in preorder and apply func
 * on value of visited node.
 *
 * @tree: Pointer to the root node
 * @func: Pointer to a function that takes an integer.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
