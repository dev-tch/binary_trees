#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: 0 or int
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/*declaration variables */
	size_t len_left = 0, len_right = 0, max_sub_tree;

	if (!tree)
		return (0);

	len_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	len_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	max_sub_tree = len_left > len_right ? len_left : len_right;
	return (max_sub_tree);
}

