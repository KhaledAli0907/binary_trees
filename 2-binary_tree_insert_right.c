#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as right child of anther child
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to the newly created node, NULL otherwise
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
