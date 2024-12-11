#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree is null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t right_size = 0;
	size_t left_size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_size = binary_tree_size(tree->left);
		right_size = binary_tree_size(tree->right);
		size = right_size + left_size + 1;
	}
	return (size);
}
