#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: The height from the node if tree is NULL 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int balance = 0;

if (tree == NULL)
{ return (0); }

balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);

return (balance);
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
else
{ leftside = 1; }

if (tree->right != NULL)
{ rightside = 1 + binary_tree_height(tree->right); }
else
{ rightside = 1; }


if (leftside > rightside)
{ return (leftside); }
else
{ return (rightside); }

}
