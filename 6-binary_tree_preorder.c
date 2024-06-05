#include "binary_trees.h"
/**
 * binary_tree_preorder -goes through a binary tree using pre-order tree
 * @tree :A pointer to the root node of the tree to traverse.
 * @func: A Pointer  to a function to call fo each other
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
