#include "binary_trees.h"

/**
 * binary_tree_delete - delete an entire binary tree
 *
 * @tree: pointer to the root node
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *delNode = malloc(sizeof(binary_tree_t));

	delNode = tree;

	if (!delNode)
		return;
	else
	{
		free(delNode->right);
		free(delNode->left);
	}
	free(delNode);
}
