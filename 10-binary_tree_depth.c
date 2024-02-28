#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: the node to measures the depth
 * Return: 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cul = 0;

	if (!tree)
		return (0);
	cul = tree->parent ? binary_tree_depth(tree->parent) + 1 : 0;
	return (cul);
}
