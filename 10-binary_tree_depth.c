#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of the passed binary tree node
 *
 * @tree: Pointer to the node in the tree
 *
 * Return: the depth of the passed binary tree node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *cur;
	size_t depth;

	depth = 0;
	cur = (binary_tree_t *)tree;
	while (cur && cur->parent)
	{
		cur = cur->parent;
		depth++;
	}
	return (depth);
}
