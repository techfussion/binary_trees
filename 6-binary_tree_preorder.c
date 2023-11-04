#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal through binary tree.
 * @tree: Points to the root node of the tree to traverse.
 * @func: Points to a function that calls each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
