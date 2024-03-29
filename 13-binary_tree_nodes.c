#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: number of nodes with at least on child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL ||  (tree->right == NULL && tree->left == NULL))
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
