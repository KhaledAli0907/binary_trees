#include "binary_trees.h"

bst_t *find_min_value_node(bst_t *node);
bst_t *remove_node(bst_t *root, int value);

/**
 * bst_remove - Remove a node from a Binary Search Tree (BST)
 * @root: Pointer to the root node of the tree where the node will be removed
 * @value: Value to remove from the tree
 * Return: Pointer to the new root node of the tree after removing the value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	return (remove_node(root, value));
}

/**
 * remove_node - remove the certain node
 * @root: the root node
 * @value: value to be removed
 * Return: pointer to the root NUll otherwise
 */
bst_t *remove_node(bst_t *root, int value)
{
	if (root == NULL)
		return (NULL);

	if (value < root->n)
		root->left = remove_node(root->left, value);

	else if (value > root->n)
		root->right = remove_node(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			bst_t *temp = root->right;

			free(root);
			return (temp);
		}
		else if (root->right == NULL)
		{
			bst_t *temp = root->left;

			free(root);
			return (temp);
		}

		bst_t *temp = find_min_value_node(root->right);

		root->n = temp->n;

		root->right = remove_node(root->right, temp->n);
	}

	return (root);
}

/**
 * find_min_value_node - find min value in the tree
 * @node: node the search
 * Return: pointer to node
 */
bst_t *find_min_value_node(bst_t *node)
{
	while (node->left != NULL)
		node = node->left;
	return (node);
}
