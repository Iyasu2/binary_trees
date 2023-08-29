#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - entry point
 *
 * @node: parent node
 * Return: int 1 if node leaf 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
