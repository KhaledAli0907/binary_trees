#include "binary_trees.h"

/**
 * binary_tree_uncle - check if the node has an uncle or not
 * @node: pointer to the node to be checked
 * Return: pointer to the uncle node, NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	/* know if node is left or right child to the parent */
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (node->parent->parent->right);
}

