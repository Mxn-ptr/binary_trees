#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *new = malloc(sizeof(binary_tree_t));
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	else if (tmp == NULL)
		return (NULL);
	else if (tree == NULL)
		return (NULL);
	new = tree;

	if (new->right->left != NULL)
	{
		tmp = new->right;
		new->right = new->right->left;
		new->parent = tmp;
		new->parent->left = new;
	}
	else
	{
		new->parent = new->right;
		new->parent->left = new;
	}

	return (new);
}
