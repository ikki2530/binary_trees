#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a bi tree using post-order traversal
 * @tree: is a root of the tree
 * @func: function to print
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, &(*func));
	binary_tree_postorder(tree->right, &(*func));
	(*func)(tree->n);
}