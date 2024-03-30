#include "binary_trees.h"

/**
 * _tree_depth - find the depth of left node
 *
 * @tree: Pointer to the root node
 *
 * Return: depth
 */
static int _tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *curr;
	int d;

	curr = (binary_tree_t *)tree;
	d = 0;
	while (curr)
	{
		curr = curr->left;
		d++;
	}
	return (d);
}

/**
 * is_same_depth - check if the binary tree is has passed depth
 *
 * @tree: Pointer to the root node
 * @lev: current level in the tree
 * @depth: depth that we will check
 *
 * Return: 1 if the binary tree has same depth otherwise 0.
 */
static int is_same_depth(const binary_tree_t *tree, int lev, int depth)
{
	if (tree->left == NULL && tree->right == NULL)
		return (depth == lev + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	lev++;
	return (is_same_depth(tree->left, lev, depth) &&
			is_same_depth(tree->right, lev, depth));
}

/**
 * binary_tree_is_perfect - check if the binary tree is perfect
 *
 * @tree: Pointer to the root node
 *
 * Return: 1 if the binary tree is perfect otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = _tree_depth(tree);
	return (is_same_depth(tree, 0, d));
}
