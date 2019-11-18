#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int temp = get_int("Enter a temp in celsius: ");
  printf("%i degrees celsius converts to:\n", temp);

  int conversion = (temp * 9 / 5) + 32;
  // int finalRes = conversion + 32;
  printf("%i\n", conversion);
}
//12 mins