#include "binary_trees.h"

/**
*  binary_tree_balance  -  measures the balance factor of a binary tree
* @tree: the pointer to root node
* Return:0 or int
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (!tree)
		return (0);

	left_side = binary_tree_balance(tree->left);
	right_side = binary_tree_balance(tree->right);

	return ((int) (left_side - right_side));
}
