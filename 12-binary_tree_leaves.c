#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: root node of tree
 * Return: 0 IF NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	count = left + right;
	return (count);
}
