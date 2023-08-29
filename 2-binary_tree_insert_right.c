#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - entry point
 *
 * @parent: parent node
 * @value: value of node
 * Return: binary_tree_t node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *old_right = parent->right;

	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = old_right;
	new_node->left = NULL;

	parent->right = new_node;

	if (old_right != NULL)
		old_right->parent = new_node;

	return (new_node);
}
