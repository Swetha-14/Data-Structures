#include<stdio.h>

typdef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

int main(void)
{
    bool search(node *tree)
    {
        // searching number 50 in the tree
        if(tree == NULL)
        {
            return false;
        }
        else if(50 < tree->number)
        {
            return search(tree->left); //recursive
        }
         else if(50 > tree->number)
        {
            return search(tree->right); // recursive
        }
        else
        {
            return true; // when it has found
        }
    }
}