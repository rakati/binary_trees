#include "binary_trees.h"

/**
 * binary_tree_delete - deletes the entire binary tree
 *
 * @tree: Pointer to the root node
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->right)
		binary_tree_delete(tree->right);
	if (tree->left)
		binary_tree_delete(tree->left);
	free(tree);
}
