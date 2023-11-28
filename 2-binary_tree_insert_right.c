#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right of onother node
* @parent: pointer to node
* @value: value of node
* Return: pointer to created node or NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*declaration local variables*/
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);
	/*create node with value n and node->parent = parent*/
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->right)
	{
		/*old node becomes right of new node*/
		new_node->right = parent->right;
		/*maj parent of old node*/
		parent->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}
	/*maj right node of parent*/
	parent->right =  new_node;

	return (new_node);
}
