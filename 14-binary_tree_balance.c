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
	size_t left_height, right_height, balance_factor;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	balance_factor = left_height - right_height;

	return ((int)balance_factor);
}

/**
 * binary_tree_height - entry point
 *
 * @tree: parent node
 * Return: size_t height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));

}
