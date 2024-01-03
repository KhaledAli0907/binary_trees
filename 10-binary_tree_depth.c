#include "binary_trees.h"

/**
 * binary_tree_depth - measure tree depth
 *
 * @tree: pointer to the root node
 *
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left = binary_tree_depth(tree->left);
	right = binary_tree_depth(tree->right);

	return ((left > right) ? left + 1 : right + 1);
}

