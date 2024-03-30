#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node in a binary tree
 *
 * @node: Pointer to a node
 *
 * Return: the uncle of a node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	return (node->parent->parent->right);
}
