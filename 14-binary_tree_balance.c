#include "binary_trees.h"

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
	l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	r = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (l - r);
}
