#include "binary_trees.h"

/**
 *binary_tree_height - returns the height of a binary tree
 *
 *@tree: pointer to the root node of the tree to measure the height of
 *
 *Return: the height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left = -1;
        size_t right = -1;
        if (tree == NULL)
                return (0);

        left = binary_tree_height(tree->left);
        right = binary_tree_height(tree->right);

        if (left >= right)
                return ((1 + left));
        return (1 + right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor of the binary tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
