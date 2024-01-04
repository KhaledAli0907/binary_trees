#include "binary_trees.h"

/**
 * is_bst - check if the tree is valid
 *
 * @node: node to start
 * @min_val: minimum value
 * @max_val: maximum value
 *
 * Return: 1 if valid, 0 otherwise
 */
int is_bst(const binary_tree_t *node, int min_val, int max_val)
{
	if (node == NULL)
		return (1);

	if (node->n <= min_val || node->n >= max_val)
		return (0);

	return (is_bst(node->left, min_val, node->n) &&
			is_bst(node->right, node->n, max_val));
}

/**
 * binary_tree_is_bst - Check if a binary tree is a valid\
 * Binary Search Tree (BST)
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_bst(tree, INT_MIN, INT_MAX));
}
