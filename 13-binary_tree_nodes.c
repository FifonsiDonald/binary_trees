#include "binary_trees.h"

/**
 * binary_tree_nodes - calculates the nodes of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: nodes of the binary tree, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		count++;
	count += (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return  (count);
}
