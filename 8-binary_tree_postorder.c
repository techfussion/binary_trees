#include "binary_trees.h"

/**
 * binary_tree_postorder - post-order traversal binary tree.
 * @tree: Points to the root node of the tree to traverse.
 * @func: Points to a function that calls for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
