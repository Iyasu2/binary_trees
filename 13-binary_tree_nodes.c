#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_nodes - entry point
 *
 * @tree: parent node
 * Return: size_t nodes of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		nodes++;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
