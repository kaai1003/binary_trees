#include "binary_trees.h"
/**
* binary_tree_preorder - preorder traversal function
* @tree: pointer to root of tree
* @func: function
* Return: nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
