#include "binary_trees.h"
binary_tree_t *binary_tree_sibling_p(binary_tree_t *node);
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node in tree
 * Return: Null or pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/*sibling of parent called uncle*/

	if (!node || !(node->parent))
		return (NULL);
	return (binary_tree_sibling_p(node->parent));
}
/**
 * binary_tree_sibling_p -  finds the sibling of a node
 * @node : pointer to node
 * Return: pointer to sibling node or NULL
 */
binary_tree_t *binary_tree_sibling_p(binary_tree_t *node)
{
	binary_tree_t *left, *right;

	if (!node || !(node->parent) || !(node->parent->left) ||
		!(node->parent->right))
		return (NULL);

	left = node->parent->left;
	right = node->parent->right;

	return ((node == left) ? right : left);
}
