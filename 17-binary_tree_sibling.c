#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node : pointer to node
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (!node || !(node->parent) || !(node->parent->left) ||
		!(node->parent->right))
		return (NULL);

	left = node->parent->left;
	right = node->parent->right;

	return ((node == left) ? right : left);
}
