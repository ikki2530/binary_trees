#include "binary_trees.h"
/**
 * height - recursive function for left and right trees
 * @tree: root of left or right tree
 * Return: height of the binary of the subtree
 */
int height(const binary_tree_t *tree)
{
	int right1 = 0, left1 = 0;

	if (tree == NULL)
		return (0);

	left1 = 1 + height(tree->left);
	right1 = 1 + height(tree->right);

	if (left1 > right1)
		return (left1);
	else
		return (right1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft = 0, hright = 0, balance_fact = 0;

	if (tree == NULL)
		return (0);

	hleft += height(tree->left);
	hright += height(tree->right);
	balance_fact = hleft - hright;

	return (balance_fact);

}
