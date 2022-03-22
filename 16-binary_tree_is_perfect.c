#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL, else tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);

	if (tree == NULL)
		return (0);
	if (height == 0)
		return (1);
	else if ((height > 0) && (height == height -1))
		if (tree->left != tree->right)
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (1);

}
