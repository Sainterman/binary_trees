#include "binary_trees.h"

/**
 * binary_tree_height_local - copy of height for holbertons purpose
 *
 * @tree: pointer to root node
 * Return: Touch, i remember touch, tell me what you see, i need somejhin more
 */
size_t binary_tree_height_local(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height_local(tree->left);
	right = binary_tree_height_local(tree->right);
	if (left >= right)
		return (left + 1);
	else
		return (right + 1);

}

/**
 * binary_tree_balance - measeure balance factor of tree
 *
 * @tree: pointer to tree's root node
 *
 * Return: balance factor, 0 if tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	if (!tree->left)
		l = -1;
	else
		l = binary_tree_height_local(tree->left);
	if (!tree->right)
		r = -1;
	else
		r = binary_tree_height_local(tree->right);
	return (l - r);
}
