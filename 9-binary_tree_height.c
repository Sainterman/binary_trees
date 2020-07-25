#include "binary_trees.h"

/**
 * binary_tree_height - measure heihgt of a binary tree
 * @tree: pointer to the root node
 *
 * Return: if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
}
