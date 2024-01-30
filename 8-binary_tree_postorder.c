#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through binary tree
 * by posy-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: Nothing since this function is for printing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL || func == NULL)
{ return; }

/* Left Subtree -> Right Subtree -> Root */

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);

}
