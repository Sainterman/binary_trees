#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth opf a node in binary tree
 *
 * @tree: Pointer to the node that measeure the depth
 *
 * Return: if treee is null return 0, otherwise the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
