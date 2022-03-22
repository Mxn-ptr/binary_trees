#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	else if (node->parent == NULL)
		return (NULL);
	if (node->left != NULL)
		return (node->left);
	else if (node->right != NULL)
		return (node->right);
	else
		return (NULL);
}
