#include "binary_trees.h"

/**
 * binary_tree_height - height of a binary tree
 * @tree: pointer to the root node of the treee to measure the height
 *
 * Return: Height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		l = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		r = 1 + binary_tree_height(tree->right);

	if (l > r)
		return (l);

	return (r);
}
