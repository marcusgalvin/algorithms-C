#include <stdio.h>
#include <cs50.h>

int main(void)
{

  // char operator;

  char operator= get_char("Enter an operator in which youd like to use (+, -, *, /): \n");
  // printf("%c", operator);

  int NumOne = get_int("Enter a number: ");
  int NumTwo = get_int("Enter another number: ");
  int NumThree;

  printf("Number One: %i\n", NumOne);
  printf("Number Two: %i\n", NumTwo);

  switch (operator)
  {
  case '+':
    printf("Your Answer is: %i\n", NumOne + NumTwo);
    break;

  case '-':
    printf("Your Answer is: %i\n", NumOne - NumTwo);
    break;

  case '*':
    printf("Your Answer is: %i\n", NumOne * NumTwo);
    break;

  case '/':
    printf("Your Answer is: %i\n", NumOne / NumTwo);
    break;

  default:
    printf("You enetered an incorect operator!");
  }