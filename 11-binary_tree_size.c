#include "binary_trees.h"

/**
 * binary_tree_size - measure size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure size
 *
 * Return: if tree is null return 0, otherwise size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	nodes = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (nodes + 1);
}
