#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to parent tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		return;
	}
	/*Delete the left and right nodes in recursive mode*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/*free current node*/
	free(tree);
}
