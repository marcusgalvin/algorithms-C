//directions

//build a gift basket with X kilos of chocolate
//2 types of bars availabe, big and small
//small bars = 1 kilo
//big bars = 5 kilos
//return the number of small bars used, but always use the big bars first, kill program if it cannot be done

#include <stdio.h>
#include <cs50.h>

int main(void)
{

  int big = get_int("amt of big bars: ");
  int small = get_int("amt of small bars: ");
  int kilos = get_int("amt of kilos in basket: ");

  int bigWeight = big * 5;
  int smallWeight = small * 1;
  // printf("%i\n", bigWeight);
  // printf("%i\n", smallWeight);

  int totalWeight = bigWeight + smallWeight;
  // printf("%i\n", totalWeight);
  int test = 0;
  int total = big % kilos;
  printf("%i remainder over the kilo amount\n", total);

  if (totalWeight > kilos)
  {
    printf("cannot work\n");
    return 1;
  }

  if (totalWeight < kilos)
  {
    printf("cannot work\n");
    return 1;
  }

  int leftOverKilos = kilos % bigWeight;
  printf("%i left over kilos after big bars used\n", leftOverKilos);

  int smallBarsUsed = leftOverKilos / 1;
  printf("%i small bars used\n", smallBarsUsed);
}