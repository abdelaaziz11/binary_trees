#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node to the new node create
 * @value: put to the new node
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
