#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if tree not perfect or NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height = 0, nodes = 0, perfect = 0;

if (tree == NULL)
{ return (0); }

height = 1 + binary_tree_height(tree);

perfect = (1 << height) -1;
nodes = binary_tree_size(tree);

if (perfect == nodes)
{ return (1); }
else
{ return (0); }

}

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

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to measure the size
 * Return: The size if tree is NULL 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;

if (tree == NULL)
{ return (0); }

size += 1;
size += binary_tree_size(tree->left);
size += binary_tree_size(tree->right);

return (size);
}
