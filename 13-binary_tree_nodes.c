#include "binary_trees.h"

/**
*  binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
* @tree: the pointer to root node
* Return:0 or int
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
