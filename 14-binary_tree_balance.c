#include "binary_trees.h"

/**
 * binary_tree_height - gets the tree height
 *
 * @tree: pointer to the root node
 *
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	return ((l > r) ? l : r);
}

/**
 * binary_tree_balance - measures the balance facator of a binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = ((int)binary_tree_height(tree->left));
	right = ((int)binary_tree_height(tree->right));
	return (left - right);
}
