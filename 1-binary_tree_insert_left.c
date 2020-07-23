#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: is a pinter to thenode to inseert the left child in
 * @value: is the vqalue to store in the new node
 *
 * Return: Pointer to the created nod or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Lnode;

	if (parent == NULL)
	{
		return (NULL);
	}
	Lnode = binary_tree_node(parent, value);
	if (Lnode == NULL)
		return (NULL);
	parent->left = Lnode;
	return (Lnode);
}
