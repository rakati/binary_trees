#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree in postorder and apply func
 * on value of visited node.
 *
 * @tree: Pointer to the root node
 * @func: Pointer to a function that takes an integer.
 *
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
