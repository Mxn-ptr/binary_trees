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

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL, else tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t heightRight = binary_tree_height(tree->right);
	size_t heightLeft = binary_tree_height(tree->left);

	if (tree == NULL)
		return (0);
	if (height == 0)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		    return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (height > 0) 
		if ((heightRight == heightLeft) && (heightRight == height -1))
			if (tree->left != tree->right)
				return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (1);

}
