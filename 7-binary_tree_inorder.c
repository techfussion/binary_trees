#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal of binary tree.
 * @tree: Points to the root node of the tree to traverse.
 * @func: Points to a function that calls each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
