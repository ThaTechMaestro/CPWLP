#include <stdio.h>
int main(void)

{
  double amountOfCement;
  int indvidualCostOfBag = 45;
  int convertedAmountOfBags;
  int totalCost;

  scanf("%lf", &amountOfCement);
  double amountOfBags = ((amountOfCement/120) + 1);
  convertedAmountOfBags = (int)amountOfBags;
  totalCost = convertedAmountOfBags * indvidualCostOfBag;
  printf("%d", totalCost);

    
    return 0;
}

