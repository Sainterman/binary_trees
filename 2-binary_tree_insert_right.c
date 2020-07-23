#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: is a pinter to thenode to inseert the right child in
 * @value: is the vqalue to store in the new node
 *
 * Return: Pointer to the created nod or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Rnode, *child;

	child = NULL;
	if (parent == NULL)
	{
		return (NULL);
	}
	Rnode = binary_tree_node(parent, value);
	if (Rnode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		child = parent->right;
		Rnode->right = child;
		child->parent = Rnode;
	}
	parent->right = Rnode;
	return (Rnode);
}
