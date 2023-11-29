#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: the pointer to root node
* Return:0 or int
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	/*Leaves are the last nodes on a tree*/
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
