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

//addNode

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

//display a list of all Nodes in the linked list sperated by ","

void displayList()
{

  NODE *trav = rootNode;

  //   while(true)
  //   {
  //       printf("%i\n", trav->value);
  //       //never trav unless you check NULL
  //       if (trav-next !=NULL)
  //       {
  //           trav = trav->next;
  //       } else

  //       {
  //           break;
  //       }
  //   }

  //when the next is not NULL, print the value of the next node it travels to
  while (trav->next != NULL)
  {
    printf("%i, ", trav->value);
    trav = trav->next;
  }

  printf("%i\n", trav->value);
}

//attempt to free a list #1

// void freeN(NODE *node)
// {

// while (trav->next != NULL)
// {
//   freeSingle(node->next)
// }

// if (node->next != NULL)
//     {
//         freeN(node->next);
//     }
//     free(node);

// }

//attempt to free linked list #2

int freeEntireListTwo()
{
  NODE *trav = rootNode;

  NODE *nextNode;

  while (trav != NULL)
  {
    nextNode = trav->next;

    free(trav);

    trav = nextNode;
  }
  return 1;
}

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
  //   printf("%i\n", rootNode->next->value);
  //   printf("%i\n", rootNode->next->next->value);
  //   printf("%i\n", rootNode->next->next->next->value);
  // rootnode.next->next->value

  // free(rootNode);

  // freeEntireList();

  freeEntireListTwo();
}