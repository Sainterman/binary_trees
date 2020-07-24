#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through binary tree using post order
 * @tree: pointer to the rrot node of tree
 * @func: pointer to funcitom call for eachnode
 * Return: void, returs when tree or func is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
