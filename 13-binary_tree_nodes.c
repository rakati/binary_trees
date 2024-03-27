#include "binary_trees.h"

/**
 * binary_tree_nodes - calculate the number of nodes with at least one child
 *
 * @tree: Pointer to the root node
 *
 * Return: the number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}
