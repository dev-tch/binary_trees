#include "binary_trees.h"
/**
* binary_tree_node - create a binary tree node
* @parent: pointer to node in tree
* @value: the value of node
* Return: NULL or pointer to new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->n = value;

	return (new_node);
}
