#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Points to the parent of the node.
 * @value: The value of new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - points to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
