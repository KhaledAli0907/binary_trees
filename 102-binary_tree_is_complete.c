#include "binary_trees.h"

/**
 * binary_tree_is_complete - gets the tree height
 *
 * @tree: pointer to the root node
 *
 * Return: tree height
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int is_complete = 1;
	int found_null = 0;

	const binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1000);
	int front = 0, rear = 0;

	queue[rear++] = tree;

	while (front < rear)
	{
		const binary_tree_t *current = queue[front++];

		if (current == NULL)
		{
			found_null = 1;
		}
		else
		{
			if (found_null)
			{
				is_complete = 0;
				break;
			}

			queue[rear++] = current->left;
			queue[rear++] = current->right;
		}
	}

	free(queue);
	return (is_complete);
}
