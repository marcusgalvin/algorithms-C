#include <stdio.h>
#include <stdlib.h>

//create a binary node
//node should have an int value
//node should have two branches

//notes on bianary trees
//binary tress are not linear, they are heirarachical, EXAMPLE: file system on a computer or IDE
//the top node is called the rootNode
//each node can have a parent/ child, however if they do not have children they are called leaves
// A Binary Tree node contains following parts.
// 1. Data
// 2. Pointer to left child
// 3. Pointer to right child

//struct
struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *newNode(int data)
{
  //malloc space for node in memory
  struct node *node = (struct node *)malloc(sizeof(struct node));

  // Assign data to this node
  node->data = data;

  // Initialize left and right children nodes as NULL
  node->left = NULL;
  node->right = NULL;
  return (node);
}

int main(void)
{
  /*create root*/
  struct node *root = newNode(1);

  // 2 and 3 become left and right children of 1
  root->left = newNode(2);
  root->right = newNode(3);

  return 0;
}
