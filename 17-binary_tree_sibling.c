#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: The sibling or
 * NULL if node is Null/parent is NULL/there's no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL)
{ return (NULL); }

if (node->parent == NULL)
{ return (NULL); }

if (node->parent->left == node)
{ return (node->parent->right); }
else
{ return (node->parent->left); }
}
