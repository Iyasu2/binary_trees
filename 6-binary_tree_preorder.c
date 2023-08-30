#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - entry point
 *
 * @tree: parent node
 * @func: function to do smt to the value of node
 * Return: none
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
