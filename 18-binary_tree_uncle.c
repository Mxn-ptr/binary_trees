#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);

	if ((node->parent->parent->right == node->parent) && (node->parent->parent->left != NULL))
		return (node->parent->parent->left);

	else if ((node->parent->parent->left == node->parent) && (node->parent->parent->right != NULL))
		return (node->parent->parent->right);

	else
		return (NULL);

}
