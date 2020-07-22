#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count_nodes = 0;

	if (tree == NULL)
		return (0);
	count_nodes += binary_tree_size(tree->left);
	count_nodes += 1; /*current node*/
	count_nodes += binary_tree_size(tree->right);
	return (count_nodes);
}
