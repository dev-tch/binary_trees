#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left of onother node
* @parent: pointer to node
* @value: value of node
* Return: pointer to created node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/*declaration local variables*/
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left = new_node;
	}
	else
	{
		parent->left =  new_node;
	}
	return (new_node);
}
