#include "binary_trees.h"

/**
 * binary_t_depth - size
 * @tree: root node
 * Return: size
 */
int binary_t_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_t_depth(tree->left) + 1 + binary_t_depth(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root node
 * Return: 0 if failure, 1 if success
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	left = binary_t_depth(tree->left);
	right = binary_t_depth(tree->right);

	if ((left - right) == 0)
		return (1);

	return (0);
}
