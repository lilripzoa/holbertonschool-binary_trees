#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves.
 * @tree: pointer to the root node of the tree
 * Return: 0 is tree is null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;
	size_t left_leaves;
	size_t right_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_leaves = binary_tree_leaves(tree->left);
		right_leaves = binary_tree_leaves(tree->right);
		leaf = left_leaves + right_leaves;
		return ((!left_leaves && !right_leaves) ? leaf + 1 : leaf + 0);
	}
}
