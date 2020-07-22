#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_1child = 0;

	if (tree == NULL)
		return (0);

	nodes_1child += binary_tree_nodes(tree->left);
	nodes_1child += binary_tree_nodes(tree->right);
	if (tree->left != NULL || tree->right != NULL)
		nodes_1child += 1;

	return (nodes_1child);
}
