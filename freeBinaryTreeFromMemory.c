#include <stdio.h>
#include <stdlib.h>

//boolean
#define true 1
#define false 0

// create a binary node
// node should have an integer value
// node should have two branches
typedef struct BNODE
{
  int value;
  struct BNODE *high;
  struct BNODE *low;
} BNODE;

BNODE *rootNode = NULL;

void addNode(int val)
{
  BNODE *newNode = malloc(sizeof(BNODE));
  newNode->value = val;
  newNode->high = NULL;
  newNode->low = NULL;

  if (rootNode == NULL)
  {
    rootNode = newNode;
    return;
  }

  BNODE *trav = rootNode;

  while (true)
  {
    if (val > trav->value)
    {
      if (trav->high == NULL)
      {
        trav->high = newNode;
        return;
      }
      trav = trav->high;
      continue;
    }
    if (trav->low == NULL)
    {
      trav->low = newNode;
      return;
    }
    trav = trav->low;
  }
}

void displayTreeOnEnter(BNODE *aNode)
{

  if (aNode == NULL)
    return;
  printf("%i\n ", aNode->value);

  //print children
  if (aNode->low != NULL)
  {
    displayTreeOnEnter(aNode->low);
  }

  if (aNode->high != NULL)
  {
    displayTreeOnEnter(aNode->high);
  }
  return;
}
void displayTreeOnExit(BNODE *aNode)
{

  if (aNode == NULL)
    return;

  //print children
  if (aNode->low != NULL)
  {
    displayTreeOnExit(aNode->low);
  }

  if (aNode->high != NULL)
  {
    displayTreeOnExit(aNode->high);
  }
  printf("%i\n ", aNode->value);

  return;
}

//have we recived this number yet
BNODE *hasValue(int val)
{
  if (rootNode == NULL)
    return NULL;

  BNODE *trav = rootNode;

  while (true)
  {
    if (trav->value == val)
    {
      printf("Found %i\n", val);
      return trav;
    }

    if (val > trav->value && trav->high != NULL)
    {
      //travel furthur and then continue to the top of the while loop and check condition
      trav = trav->high;
      continue;
    }

    if (val < trav->value && trav->low != NULL)
    {
      trav = trav->low;
      continue;
    }

    printf("Did not find the value");
    return NULL;
  }
}

//freeAllNodes from memory - no leaks
void freeAllNodes(BNODE *node)
{
  if (rootNode == NULL)
  {
    return;
  }

  while (true)
  {

    if (node->low != NULL)
    {
      freeAllNodes(node->low);
    }
    if (node->high != NULL)
    {
      freeAllNodes(node->high);
    }
    free(node);
    return;
  }
}

//call funcs in main
int main(void)
{
  int stream[] = {5, 8, 9, 4, 6, 7, 2, 3, 1, 10};

  for (int i = 0; i < 10; i++)
  {
    addNode(stream[i]);
  }

  //    BNODE *trav = rootNode;
  // printf("%i\n", rootNode);
  displayTreeOnEnter(rootNode);
  displayTreeOnExit(rootNode);
  printf("\n");
  hasValue(5);
  hasValue(500);
  hasValue(7);
  freeAllNodes(rootNode);
}
