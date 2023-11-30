#include "binary_trees.h"
int tree_perfect(const binary_tree_t *tree, size_t depth);
size_t depth_left(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect  -  checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t expected_depth = 0;

	if (!tree)
		return (0);
	expected_depth = depth_left(tree);
	return (tree_perfect(tree, expected_depth));
}
/**
* tree_perfect -helper function to traverse the tree nodes
* @tree: pointer to node in tree
* @depth: depth of each level when travers tree
* Return: 0 or 1
*/
int tree_perfect(const binary_tree_t *tree, size_t depth)
{

	if (tree == NULL)
		return (depth == 0);
	/*node with one children*/
	if (!(tree->left) !=  !(tree->right))
		return (0);

	return (tree_perfect(tree->left, depth - 1) &&
		tree_perfect(tree->right, depth - 1));
}

/**
* depth_left - max depth in left side
* @tree:pointer to root node
* Return: int value
*/
size_t depth_left(const binary_tree_t *tree)
{
	return (!tree ? 0 : 1 + depth_left(tree->left));
}
