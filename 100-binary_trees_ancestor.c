#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: NULL if failure
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	const binary_tree_t *firstAnc, *secondAnc;

	if (!first && !second)
		return (NULL);

	for (firstAnc = first; firstAnc; firstAnc = firstAnc->parent)
	{
		for (secondAnc = second; secondAnc; secondAnc = secondAnc->parent)
		{
			if (firstAnc == secondAnc)
				return ((binary_tree_t *)firstAnc);
		}
	}
	return (NULL);
}
