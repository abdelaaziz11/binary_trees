#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node to find the uncle
 * Return: uncle node, NULL if failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle, *parent;

	if (!node ||	!node->parent->parent ||	!node->parent)
		return (NULL);
	parent = node->parent;
	uncle = parent->parent;
	if  (uncle->left == parent)
		return (uncle->right);
	else
		return (uncle->left);
}
