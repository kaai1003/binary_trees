#include "binary_trees.h"
/**
* binary_tree_is_leaf - check if node is leaf
* @node: pointer to node to check
* Return: 1 if node is leaf , 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
