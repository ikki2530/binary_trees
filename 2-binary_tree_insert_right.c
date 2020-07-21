#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node to the right
 * @parent: parent node of the new node
 * @value: data of the new node
 * Return: Address of new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = newnode;
		newnode->parent = parent;
	}
	else
	{
		/*connect new node with the right child of parent*/
		newnode->right = parent->right;
		parent->right->parent = newnode;
		/*connect the new node with the parent*/
		newnode->parent = parent;
		parent->right = newnode;
	}

	return (newnode);
}
