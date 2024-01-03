#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the tree is full
 *
 * @tree: pointer to the root node
 *
 * Return: 1 if it's full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* if both childs are none this means the tree is full */
	if (!tree->right && !tree->left)
		return (1);

	if (tree->right != NULL && tree->left != NULL)
		return (binary_tree_is_full(tree->right)
				&& binary_tree_is_full(tree->right));
	return (0);
}

