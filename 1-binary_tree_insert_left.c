#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node as a left-child
 *
 * @parent: parent  of the node.
 * @value: The value.
 *
 * Return: left node unless error.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
