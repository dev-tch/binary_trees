#include "binary_trees.h"
/**
 * binary_tree_is_root - check is a node is root
 * @node: pointer to node
 * Return: 1 if root else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	return ((node->parent == NULL) ? 1 : 0);
}
