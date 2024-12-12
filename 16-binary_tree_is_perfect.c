#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * is_perfect - check if binary is perfect
 * @tree: Pointer to the root node of the tree.
 * Return: 1 if tree is perfect, 0 otherwise
 */

int is_perfect(const binary_tree_t *tree)
{
	int left;
	int right;

	if (tree->left && tree->right)
	{
		left = 1 + is_perfect(tree->left);
		right = 1 + is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
