#include "binary_trees.h"

/**
 * binary_tree_height - calculate the height of the binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	r = binary_tree_height(tree->right) + 1;
	l = binary_tree_height(tree->left) + 1;
	return (r > l ? r : l);
}
