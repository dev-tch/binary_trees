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
	/*create node with value n and node->parent = parent*/
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->left)
	{
		/*old node becomes left of new node*/
		new_node->left = parent->left;
		/*maj parent of old node*/
		parent->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}
	/*maj left node of parent*/
	parent->left =  new_node;

	return (new_node);
}
