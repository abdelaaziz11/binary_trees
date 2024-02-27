#include "binary_trees.h"

/**
 * binary_tree_height - measures height of baniry tree
 * @tree: the root node
 * Return: 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rightHeight = 0, leftHeight = 0;

	if (!tree)
		return (0);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	return (leftHeight > rightHeight ? 1 + leftHeight : 1 + rightHeight);
}
