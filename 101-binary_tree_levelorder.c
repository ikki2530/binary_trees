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
/**
 * print_level - recursive function to print each level
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * @level: current level to print
 * Return: Nothing
 */
void print_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL)
		return;
	if (level == 0)
		(*func)(tree->n);
	else
	{
		print_level(tree->left, &(*func), level - 1);
		print_level(tree->right, &(*func), level - 1);
	}
}
/**
 * print_tree_level - goes through levels in the binary tree
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: NOthing
 */
void  print_tree_level(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0, level = 0;

	height = (int)binary_tree_height(tree);
	for (level = 0; level <= height; level++)
	{
		/*printf("\nlevel %d\n", level);*/
		print_level(tree, &(*func), level);
	}
}
/**
 * binary_tree_levelorder - goes through a btree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return; Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;
	print_tree_level(tree, &(*func));
}
