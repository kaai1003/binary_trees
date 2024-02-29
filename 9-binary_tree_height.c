#include "binary_trees.h"
/**
* binary_tree_height - define height of tree
* @tree: pointer to tree
* Return: height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h > right_h)
		return (left_h + 1);
	return (right_h + 1);
}
