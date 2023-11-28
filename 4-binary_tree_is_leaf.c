#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to node
 * Return: 1 node is leaf otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*a node is leaf if deas not have childs*/
	if (!node)
		return (0);
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}
