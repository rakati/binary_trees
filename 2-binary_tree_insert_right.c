#include "binary_trees.h"

/**
 * binary_tree_insert_right - add new node of binary tree to the right of
 * passed node
 *
 * @parent: Pointer to the parent node
 * @value: value of the new node
 *
 * Return: new allocated node added to the left of parent node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);
	tmp = parent->right;
	parent->right = binary_tree_node(parent, value);
	if (tmp)
	{
		parent->right->right = tmp;
		tmp->parent = parent->right;
	}
	return (parent->right);
}
