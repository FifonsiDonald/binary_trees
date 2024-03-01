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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int height, depth = 0;

    if (tree == NULL)
        return 0;

    height = binary_tree_height(tree);

    /* Calculate depth of leftmost leaf node */
    while (tree != NULL)
    {
        depth++;
        tree = tree->left;
    }

    /* Check if all leaf nodes are at the same depth and if the tree is full */
    return (1 << height) - 1 == (1 << depth) - 1;
}
