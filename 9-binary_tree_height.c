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
	leftHeight = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	rightHeight = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}
