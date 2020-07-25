#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with at leat 1 child
 * @tree: pointer to root of tree
 * Return: number of nodes with 1 child in tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	if (tree->left || tree->right)
		return (l + r + 1);
	return (l + r);
}
