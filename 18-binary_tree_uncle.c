#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = malloc(sizeof(binary_tree_t));

	if (tmp == NULL)
		return (NULL);

	if (node == NULL)
		return (NULL);

	tmp = node->parent;

	if (tmp->left != NULL)
		return (tmp->left);

	else if (tmp->right != NULL)
		return (tmp->right);

	else
		return (NULL);

}
