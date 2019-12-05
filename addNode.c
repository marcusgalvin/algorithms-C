#include <stdio.h>
#include <stdlib.h>

//declare a scructure called node, set an int value, and pointer to another node
typedef struct NODE
{
  int value;
  struct NODE *next;
} NODE;

void addNode(int val, NODE *rootNode)
{

  //malloc space for the new node

  NODE *newNode = malloc(sizeof(NODE));
  newNode->value = val;
  newNode->next = NULL;

  //declare node pointer
  NODE *new = rootNode
      //make sure the next pointer is not NULL
      if (new->next == NULL)
  {
    printf("cannot be null")
  }
  else
  {
    new = new->next;
  }

  new->next = newNode
                  rootNode->next = newNode;
  //free space?
  free(newNode)
}

int main(void)
{
  NODE rootNode;
  rootNode.value = 5;
  rootNode.next = NULL;
  // NODE secondNode;
  // secondNode.value = 10;
  // secondNode.next = NULL;
  // myNode.next = &secondNode;
  // printf("%i\n", secondNode.value);
  // printf("%i\n", myNode.next->value);

  addNode(8, &rootNode);
  addNode(9, &rootNode);
  printf("%i\n", rootNode.next->value);
  printf("%i\n", rootNode.next->value);
}