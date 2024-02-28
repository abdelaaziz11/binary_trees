#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: root node
 * Return: 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left ||	tree->right)
	{
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (1 + count);
	}
	else
		return (0);
}
