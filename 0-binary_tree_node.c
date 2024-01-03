#include "binary_trees.h"

/**
 * binary_tree_node - Creates binary tree node
 * 
 * @parent: pointer to the parent node to create
 * @value: value to be inserted in this node
 *
 * Return: pointer to the newly created node, NULL otherwise
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
	binary_tree_t *node = NULL;

	if (!parent || !value) return NULL;

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	return node;
}

