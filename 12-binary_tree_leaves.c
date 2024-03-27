#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate the number of leaves of a binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: the number of the leavers of a binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left));
}
