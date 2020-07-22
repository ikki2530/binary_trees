#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: heihgt of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right1 = 0, left1 = 0;


	if (tree == NULL)
		return (0);

	if (tree->left)
		left1 = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right1 = 1 + binary_tree_height(tree->right);

	if (left1 > right1)
		return (left1);
	else
		return (right1);
}
