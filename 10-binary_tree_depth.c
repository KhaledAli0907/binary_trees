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
	if (!tree)
		return (0);

	return ((tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
