#include "binary_trees.h"

/**
 * _binary_tree_height - calculate the height of the binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: the height of the binary tree
 */
static size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	r = _binary_tree_height(tree->right) + 1;
	l = _binary_tree_height(tree->left) + 1;
	return (r > l ? r : l);
}

/**
 * binary_tree_balance - calculate the balance factor of binary tree
 *
 * @tree: Pointer to the root node
 *
 * Return: the number of balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	l = tree->left ? (int) _binary_tree_height(tree->left) : -1;
	r = tree->right ? (int) _binary_tree_height(tree->right) : -1;
	return (l - r);
}
