#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * height - function calcul the height of a tree.
 * @tree: Pointer to the root node of the tree.
 * Return: The height of the tree.
 */
int height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * is_perfect_recursive -  check if binary is perfect
 * @tree: Pointer to the root node of the tree.
 * @depth: The depth of the tree
 * @level: The current level of the node in the tree.
 * Return: 1 if tree is perfect, 0 otherwise
 */

int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth = 0;
	const binary_tree_t *temp;

	if (tree == NULL)
		return (0);

	temp = tree;
	while (temp != NULL)
	{
		depth++;
		temp = temp->left;
	}

	return (is_perfect_recursive(tree, depth, 0));
}
