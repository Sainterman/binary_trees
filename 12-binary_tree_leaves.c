#include "binary_trees.h"

/**
 * binary_tree_leaves - counts leaves in tree
 * @tree: poiter to root of tree
 *
 * Return: 0 if tree NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
		return binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
}
