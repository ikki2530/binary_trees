#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count_leaves = 0;

	if (tree == NULL)
		return (0);

	count_leaves += binary_tree_leaves(tree->left);
	count_leaves += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		count_leaves += 1;

	return (count_leaves);
}
