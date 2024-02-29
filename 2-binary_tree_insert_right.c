#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as a right-child
 *
 * @parent: parent  of the node.
 * @value: The value.
 *
 * Return: right node unless error.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
