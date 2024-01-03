#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *
 * @tree: pointer to the root node
 * @func: pointer to function take value of the node as it's param
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* call the function */
	func(tree->n);

	/* recusivly call the preorder function on left and right child to traverse */
	binary_tree_preorder(tree->right, func);
	binary_tree_preorder(tree->left, func);
}
