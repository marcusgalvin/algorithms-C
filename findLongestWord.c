#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/////////
//pseudo
// 1) Separate string by words
// 2) check length of each word
// 3) If the length of the one you're checking > the longest word you already looked at - save this one to be the longest word

////////

//notes on strtok:
// split a string into several 'tokens' using strtok function. To split a string we need delimiters
//delimiters are characters which will be used to split the string.

//The words are separated by space. So space will be our delimiter, so use: char delim[] = " ";
//strtok accepts two strings - the first one is the string to split, the second one is a string containing all delimiters.
//In this case there is only one delimiter
//strtok returns a 'pointer' to the character of next token. So the first time it is called, it will point to the first word.

//strtok needs to be called multiple times because it only gets on char or 'token' at a time

//strtok modifies the original string.
//It puts NULL characters ('\0') at the delimiter position after every call to strtok so that tokens can be tracked.

int main(void)
{
  //set variable for the length of each word
  // int longestLength = 0;

  char str[] = "The quick brown fox jumped over the lazy dog";
  printf("%s\n", str);

  //track size of given string
  int init_size = strlen(str);
  printf("Total Length: %d\n", init_size);

  char delim[] = " ";

  char *ptr = strtok(str, delim);

  //only prints first word, must use a loop to get every word
  printf("'%s'\n", ptr);

  //this loops thru the string and return each word, in the same way .split() words in JS
  //this while loops works (prints out each word andi ts length), but is throwing an error and aborting the program
  while (ptr != NULL)
  {
    printf("'%s'\n", ptr);
    ptr = strtok(NULL, delim);

    int length = strlen(ptr);

    printf("Length of this word is %d\n", length);

    if (length > longestLength)
    {
      longestLength = length;
      printf("%d", longestLength);
    }
  }

  // size_t i = 0;
  // for (; i < init_size; i++)
  // {

  //   int test = ptr[i];

  //   printf("%c\n", test);

  //   // int lengths = strlen(test);
  //   // printf("%d\n", lengths);

  // }

  // size_t length = strlen(string);
  // size_t i = 0;
  // for (; i < length; i++) {
  //     printf("%c\n", string[i]);    /* Print each character of the string. */
  // }
}