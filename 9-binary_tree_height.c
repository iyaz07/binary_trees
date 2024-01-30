#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: The height from the node if tree is NULL 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftside = 0;
size_t rightside = 0;

if (tree == NULL)
{ return (0); }

if (tree->left != NULL)
{ leftside = 1 + binary_tree_height(tree->left); }

if (tree->right != NULL)
{ rightside = 1 + binary_tree_height(tree->right); }

if (leftside > rightside)
{ return (leftside); }
else
{ return (rightside); }

}
