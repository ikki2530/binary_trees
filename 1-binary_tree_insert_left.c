#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node to the left
 * @parent: parent node of the new node
 * @value: data of the new node
 * Return: Address of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;


	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	else
	{
		/*connect new node with the left child of parent*/
		newnode->left = parent->left;
		parent->left->parent = newnode;
		/*connect the new node with the parent*/
		newnode->parent = parent;
		parent->left = newnode;
	}

	return (newnode);
}
