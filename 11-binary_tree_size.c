#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_size - entry point
 *
 * @tree: parent node
 * Return: size_t size of node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
