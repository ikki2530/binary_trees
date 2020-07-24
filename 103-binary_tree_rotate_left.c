#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *x = NULL, *y = NULL;

	x = tree;
	y = tree->right;

	x->right = y->left;
	if (y->left != NULL)
		y->left->parent = x;

	/*y point ot x's parent*/
	y->parent = x->parent;
	if (x->parent == NULL)
		tree = y;
	else if (x == x->parent->left)
		x->parent->left = y;
	else
		x->parent->right = y;

	/*match y and x again*/
	y->left = x;
	x->parent = y;

	return (tree);
}
