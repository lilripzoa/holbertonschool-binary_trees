#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height_b - function that measure the height of a binary tree
 * @tree: pointer
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t gauche = 0;
	size_t droite = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			gauche = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			droite = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((gauche > droite) ? gauche : droite);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
