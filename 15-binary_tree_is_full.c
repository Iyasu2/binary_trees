#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_full - entry point
 *
 * @tree: parent node
 * Return: 1 if full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	int left_full = binary_tree_is_full(tree->left);
	int right_full = binary_tree_is_full(tree->right);

	return (left_full && right_full);
}
