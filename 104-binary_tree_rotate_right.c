#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Function that rotate right the binary tree
 * @tree: the root node of the tree
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (!tree || !tree->left)
		return (NULL);

	temp = tree->left;
	tree->left = temp->right;
	if (temp->right != NULL)
		temp->right->parent = tree;
	temp->right = tree;
	temp->parent = tree->parent;
	tree->parent = temp;
	return (temp);
}

