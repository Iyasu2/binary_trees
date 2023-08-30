#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_root - entry point
 *
 * @node: parent node
 * Return: int 1 if node 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
