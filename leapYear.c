#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int year;
    
    year = get_int("Please enter a year: ");
    
        
     if (year % 400 == 0)
     {
         printf("Yes, leap year\n");
     }
    
     else if (year % 4 == 0) 
     {
         printf("Yes, leap year\n");
     }
    
    else if (year % 100 != 0)
    {
        printf("No, not a leap year\n");
    }
    
     
    
    
}
