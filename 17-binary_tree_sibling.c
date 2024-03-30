#include "binary_trees.h"

/**
 * binary_tree_sibling - check if the node in a binary tree has a sibling
 *
 * @node: Pointer to a node
 *
 * Return: sibling of a node if existed otherwise Null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}
