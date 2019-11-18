#include <stdio.h>
#include <cs50.h>

int main(void)
{

  int number = get_int("Enter the number in which you would like the factorial of: ");
  printf("%i\n", number);

  int total = 1;

  //loop thru
  for (int i = 1; i <= number; i++)
  {
    total = total * i;
  }
  printf("%i\n", total);
}

//10 mins