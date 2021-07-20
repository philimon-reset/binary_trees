#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree node
 * @tree: a pointer to the parent node
 *
 * Return: void function
 */
 
void binary_tree_delete(binary_tree_t *tree)
 {
	if (tree == NULL)
	{
		free(tree);
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
 }