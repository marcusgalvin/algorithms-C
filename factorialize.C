#include <stdio.h>

int main()
{
  int i = 1;

  int num = 5;

  int total = 1;

  for (i = 1; i <= num; i++)
  {
    total = total * i;
    printf("total factorialized number: %d\n", total);
  }
  return total;
}