#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct NODE
{
  int value;
  struct NODE *next;
} NODE;

NODE *rootNode = NULL;

void addNode(int val)
{
  // create a node
  // navigate list to the end
  // add new node to end of list

  NODE *newNode = malloc(sizeof(NODE));
  newNode->value = val;
  newNode->next = NULL;

  if (rootNode == NULL)
  {
    rootNode = newNode;
    return;
  }

  NODE *trav = rootNode;

  while (trav->next != NULL)
  {
    trav = trav->next;
  }
  trav->next = newNode;
}

void displayList()
{
  NODE *trav = rootNode;
  while (trav->next != NULL)
  {
    printf("%i, ", trav->value);
    trav = trav->next;
  }
  printf("%i\n", trav->value);
}

//free list
//navigate to the second to last item

void freeList()
{
  if (rootNode == NULL)
  {
    return;
  }

  while (true)
  {
    NODE *trav = rootNode;
    if (trav->next == NULL)
    {
      free(trav);
      return;
      //reset back to null
      rootNode = NULL;
    }

    while (trav->next->next != NULL)
    {
      //this is how we move thru the list
      trav = trav->next;
    }
    //found second to last node
    // printf("%i\n", trav->value);
    free(trav->next);
    //update to say that that pointer no long is valid, its free
    trav->next = NULL;
  }
}

void freeNode(NODE *aNode)
{
  if (aNode->next == NULL)
  {
    free(aNode);
    //when you hit return you backwards up the stack of addNodes
    return;
  }

  freeNode(aNode->next);
  //9 starts here, 9s child has been free so free 9
  free(aNode);
  //return so now 8 gets called
  return;
}
//freeNode(5)
//freeNode(8)
//freeNode(9)
//freeNode(4)

int main(void)
{
  // NODE rootNode;
  // rootNode.value = 5;
  // rootNode.next = NULL;
  // NODE secondNode;
  // secondNode.value = 10;
  // secondNode.next = NULL;
  // myNode.next = &secondNode;
  // printf("%i\n", secondNode.value);
  // printf("%i\n", myNode.next->value);
  addNode(5);
  addNode(8);
  addNode(9);
  addNode(4);
  displayList();
  // printf("%i\n", rootNode->next->value);
  // printf("%i\n", rootNode->next->next->value);
  // printf("%i\n", rootNode->next->next->next->value);
  // rootnode.next->next->value
  //   free(rootNode);
  // freeList();
  freeNode(rootNode);
  rootNode = NULL;
}
