#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - entry point
 *
 * @tree: parent node
 * Return: int balance factor of node
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = 0;
	if (tree->left != NULL)
		left_height = binary_tree_balance(tree->left) + 1;

	right_height = 0;
	if (tree->right != NULL)
		right_height = binary_tree_balance(tree->right) + 1;

	return (left_height - right_height);
}
