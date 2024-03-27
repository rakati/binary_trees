#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if the passed node is a leaf of a binary tree
 *
 * @node: Pointer to a node
 *
 * Return: 1 if node is a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && node->left == NULL && node->right == NULL);
}
