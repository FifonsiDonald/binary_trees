#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as a right-child
 *
 * @parent: parent  of the node.
 * @value: The value.
 *
 * Return: right node unless error.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
