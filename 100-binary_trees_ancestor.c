#include "binary_trees.h"

/**
 * _binary_tree_find - search for a node in the binary tree
 *
 * @tree: Pointer to the root node
 * @to_find: Pointer to a node to search for.
 *
 * Return: 1 if found otherwise 0
 */
static int _binary_tree_find(binary_tree_t *tree, const binary_tree_t *to_find)
{
	if (tree == NULL)
		return (0);
	if (tree == to_find)
		return (1);
	if (_binary_tree_find(tree->left, to_find))
		return (1);
	return (_binary_tree_find(tree->right, to_find));
}

/**
 * binary_trees_ancestor - find lowest common ancestor of two nodes
 *
 * we search by going up the parent node of the first node, and launch
 * a search on the other subtree that may contain second node, if second node
 * is found then current parent is LCA otherwise we continue the process until
 * we reach the root of the binary tree.
 *
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
										const binary_tree_t *second)
{
	if (!first || !second || !first)
		return (NULL);
	if (_binary_tree_find(first->left, second) ||
		_binary_tree_find(first->right, second))
		return ((binary_tree_t *)first);
	return (binary_trees_ancestor(first->parent, second));
}
