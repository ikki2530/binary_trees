#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a new node
 * @parent: parent node
 * @value: data of the new node
 * Return: New node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
