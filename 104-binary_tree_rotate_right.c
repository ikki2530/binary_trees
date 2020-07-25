#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: performs a right-rotation on a binary tree
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *x = NULL, *y = NULL;

	if (tree == NULL)
		return (NULL);

	x = tree;
	y = tree->left;

	x->left = y->right;
	if (y->right != NULL)
		y->right->parent = x;

	/*y point ot x's parent*/
	y->parent = x->parent;
	if (x->parent == NULL)
		tree = y;
	else if (x == x->parent->right)
		x->parent->right = y;
	else
		x->parent->left = y;

	/*match y and x again*/
	y->right = x;
	x->parent = y;

	return (tree);
}
