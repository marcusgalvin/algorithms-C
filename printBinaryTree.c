#include <stdio.h>
#include <stdlib.h>

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

  BNODE *trav = aNode;

  //if aNode does not exist, exit
  if (aNode == NULL)
  {
    return;
  }
  // printf("%i", aNode->value);
  // printf("Numbers: ");
  while (true)
  {
    printf("%i\n", trav->value);
    // printf("%i ,", trav->low->value);
    // printf("%i ,", trav->high->value);

    //if the traveler looks to the less than side and its not NULL, run the fucn and print low values
    if (trav->low != NULL)
    {
      // printf("%i\n", trav->low->value);
      displayTreeOnEnter(trav->low);
    }
    //once there are no more children on the less than (low) side of the tree,
    //if the trav looks to the greater than side and its not NULL, run the func and print high values next
    if (trav->high != NULL)
    {
      displayTreeOnEnter(trav->high);
    }
    return;
  }
}
void displayTreeOnExit(BNODE *aNode)
{
}

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
}
