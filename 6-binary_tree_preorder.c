#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses the the binary tree in preorder
 *
 * @tree: the binary tree
 * @func:A pointer to a function to call for each node.
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
