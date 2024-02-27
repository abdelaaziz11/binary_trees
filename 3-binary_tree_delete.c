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
	if (!tree)
		return;
	else
	{
	if (tree)
	{
	free(tree->right);
	free(tree->left);
	}
	free(tree);

	}
}
