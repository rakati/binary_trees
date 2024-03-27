#include "binary_trees.h"

/**
 * binary_tree_insert_left - add new node of binary tree to the left of passed
 * node
 *
 * @parent: Pointer to the parent node
 * @value: value of the new node
 *
 * Return: new allocated node added to the left of parent node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	tmp = parent->left;
	parent->left = binary_tree_node(parent, value);
	if (tmp)
	{
		parent->left->left = tmp;
		tmp->parent = parent->left;
	}
	return (parent->left);
}
