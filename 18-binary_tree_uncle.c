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

	if ((node->parent->right == node) && (node->parent->left != NULL))
		return (node->parent->left);
	else if ((node->parent->left == node) && (node->parent->right != NULL))
		return (node->parent->right);
	else
		return (NULL);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	paternity_test = binary_tree_sibling(node->parent);

	if (node == NULL)
		return (NULL);

	if (paternity_test != NULL)
		return paternity_test;
	else
		return (NULL);

}
