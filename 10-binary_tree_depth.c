#include "binary_trees.h"
/**
* binary_tree_depth - calculate depth of binary tree node
* @tree: pointer to binary tree node
* Return: depth of node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node;

	if (!tree->parent || !tree)
		return (0);
	depth_node = binary_tree_depth(tree->parent);
	return (depth_node + 1);
}
