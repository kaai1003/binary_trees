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
	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	if (left_h > right_h)
		return (left_h);
	return (right_h);
}
