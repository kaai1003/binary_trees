#include "binary_trees.h"
/**
* binary_tree_size - calculate size of binary tree
* @tree: pointer to binary tree
* Return: size of binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree)
		return (0);
	left_h = binary_tree_size(tree->left);
	right_h = binary_tree_size(tree->right);
	return (right_h + left_h + 1);
}
