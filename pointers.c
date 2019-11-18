#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void updateX(int *);

void updateIndexOne(int anArray[])
{
  anArray[1] = 20;
}

int main(void)
{
  // printf("Hello World\n");

  int x = 4;
  int y = 6;
  int *imAlsoX = &x;

  // printf("%i\n", *imAlsoX);

  // printf("%i + %i = %i\n", x, y, x + y);

  *imAlsoX = 5;

  printf("%i + %i = %i\n", x, y, x + y);

  updateX(&x);
  printf("%i + %i = %i\n", x, y, x + y);
}

void updateX(int *x)
{
  printf("x: %i\n", *x);
  *x = 10;
  printf("x: %i\n", *x);
}