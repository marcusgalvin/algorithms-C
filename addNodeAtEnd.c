#include <stdio.h>
#include <stdlib.h>

//include booleans
#define true 1
#define false 0

typedef struct NODE
{
  int value;
  struct NODE *next;
} NODE;

//declare globally so you can use it anywhere
NODE *rootNode = NULL;

void addNode(int val)
{
  //create a node
  //navigate to end of the node
  //add new node to end of list
  NODE *newNode = malloc(sizeof(NODE));
  newNode->value = val;
  newNode->next = NULL;

  if (rootNode == NULL)
  {
    rootNode = newNode;
    return;
  }

  //once found node then travel
  //navigator
  NODE *trav = rootNode;

  ///while not null, travel the list
  while (trav->next != NULL)
  {
    trav = trav->next;
  }
  trav->next = newNode;
}

void displayList()
{
  //todo
}

int main(void)
{
  //root node is in main
  //   NODE rootNode;
  //   rootNode.value = 5;
  //   rootNode.next = NULL;
  // NODE secondNode;
  // secondNode.value = 10;
  // secondNode.next = NULL;
  // myNode.next = &secondNode;
  // printf("%i\n", secondNode.value);
  // printf("%i\n", myNode.next->value);
  displayList();
  addNode(5);
  addNode(8);
  addNode(9);
  addNode(4);
  printf("%i", rootNode->next->value);
  printf(",");
  printf("%i", rootNode->next->next->value);
  printf(",");

  printf("%i", rootNode->next->next->next->value);
  printf(",");

  printf("%i", rootNode->next->next->next->value);
}