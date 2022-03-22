#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);
	else if (node == NULL)
		return (NULL);
	else if (node->parent == NULL)
		return (NULL);
	tmp = node->parent;

	if ((tmp->right == node) && (tmp->left != NULL))
		return (tmp->left);
	else if ((tmp->left == node) && (tmp->right != NULL))
		return (tmp->right);
	else
		return (NULL);
}
