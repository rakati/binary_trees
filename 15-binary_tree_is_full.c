#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the binary tree is full (all its children
 * has two or zero nodes).
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 if the binary tree is full otherwise 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	return (binary_tree_is_full(tree->right) &&
			binary_tree_is_full(tree->left));
}
