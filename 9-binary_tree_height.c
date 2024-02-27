#include "binary_trees.h"

/**
 * binary_tree_height - measures height of baniry tree
 * @tree: the root node
 * Return: 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int rightHeight, leftHeight;

	if (!tree)
		return (0);
	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	return (leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1);
}
