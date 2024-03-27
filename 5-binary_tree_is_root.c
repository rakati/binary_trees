#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the passed node is the root of
 * the binary tree
 *
 * @node: Pointer to a node
 *
 * Return: 1 if node is a root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && node->parent == NULL);
}
