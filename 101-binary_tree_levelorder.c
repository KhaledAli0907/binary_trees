#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree \
 * using level order traversal
 *
 * @tree: pointer to the root node
 * @func: pointer to function take value of the node as it's param
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *queue[1000];
	int front = 0, rear = 0;

	/* add the root node to the rear of the queue */
	queue[rear++] = tree;

	while (front < rear)
	{
		/* get the front node */
		const binary_tree_t *current = queue[front++];

		func(current->n);

		/* add the left node if exists */
		if (current->left != NULL)
			queue[rear++] = current->left;

		/* add the right node if exists */
		if (current->right != NULL)
			queue[rear++] = current->right;
	}
}
