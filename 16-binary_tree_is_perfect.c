#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_perfect - entry point
 *
 * @tree: parent node
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t level = 0;
	size_t count = 0;
	size_t exponent = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	level = binary_tree_height(tree);
	count = binary_tree_size(tree);

	exponent = (size_t)_pow_recursion(2, level + 1);
	return (exponent - 1 == count);
}

/**
 * binary_tree_height - entry point
 *
 * @tree: parent node
 * Return: size_t height of node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the value to exponentiate
 * @y: the power to raise x to
 * Return: x to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
* binary_tree_size - Measures the size of a binary tree.
* @tree: Pointer to the root node of the tree to measure the size.
*
* Return: Size of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
