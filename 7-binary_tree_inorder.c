#include "binary_trees.h"

/**
 * binary_tree_inorder - print elements of tree using in-order traversal
 *
 * @tree: root node
 * @func: function to use on every node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->right);
	func(tree->value);
	binary_tree_inorder(tree->left);
}