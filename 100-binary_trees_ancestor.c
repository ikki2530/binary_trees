#include "binary_trees.h"
/**
 * binary_trees_ancestor - lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t
*first, const binary_tree_t *second)
{
	const binary_tree_t *current = NULL, *current2 = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)second);

	current = first;
	while (current)
	{
		current2 = second;
		while (current2)
		{
			if (current == current2)
				return ((binary_tree_t *)current);
			current2 = current2->parent;
		}
		current = current->parent;
	}
	return (NULL);
}
