#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures height of baniry tree
 * @tree: the root node
 * Return: 0 if NULL
 */
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t rightHeight = 0, leftHeight = 0;

	if (!tree)
		return (0);
	leftHeight = tree->left ? binary_tree_height_balance(tree->left) + 1 : 1;
	rightHeight = tree->right ? binary_tree_height_balance(tree->right) + 1 : 1;
	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node
 * Return: 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height_balance(tree->left);
	right_height = binary_tree_height_balance(tree->right);
	return (left_height - right_height);
}
