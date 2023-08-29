#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - entry point
 *
 * @parent: parent node
 * @value: value of node
 * Return: binary_tree_t node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *old_left = parent->left;

	if (new_node == NULL || parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = old_left;
	new_node->right = NULL;

	parent->left = new_node;

	if (old_left != NULL)
		old_left->parent = new_node;

	return (new_node);
}
