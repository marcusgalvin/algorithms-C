#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int first = get_int("Please enter number 1: ");
  int last = get_int("Please enter number2: ");

  int sum = 0;

  for (int i = first; i <= last; i++)
  {
    sum = sum + i;
  }

  printf("%i\n", sum);
}

//15mins