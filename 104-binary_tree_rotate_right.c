#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return NULL;
	new = tree->left;

	if (new->right != NULL)
		tree->left = new->right;

	tree = new->right;
	return (new);
}
