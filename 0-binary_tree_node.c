#include "binary_trees.h"

/**
 * binary_tree_node - create a new node of binary tree
 *
 * @parent: Pointer to the parent node
 * @value: value of the new node
 *
 * Return: new allocated node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->left = new->right = NULL;
	new->n = value;
	return (new);
}
