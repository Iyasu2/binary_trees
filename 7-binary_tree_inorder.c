#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - entry point
 *
 * @tree: parent node
 * @func: function to do smt to the value of node
 * Return: none
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
