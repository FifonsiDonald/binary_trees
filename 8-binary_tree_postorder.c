#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses the the binary tree in preorder
 *
 * @tree: the binary tree
 * @func:A pointer to a function to call for each node.
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}