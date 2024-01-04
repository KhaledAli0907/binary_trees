#include "binary_trees.h"

/**
 * binary_tree_sibling - check if the node has a sibling or not
 * @node: pointer to the node to be checked
 * Return: pointer to the sibling node, NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);

	/* know if node is left or right child */
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
}
