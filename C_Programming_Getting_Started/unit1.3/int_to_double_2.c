
#include <stdio.h>
int main(void)

{
  int currentPopulation;
  double projection;
  double growth;
  double projectedPopulation;

    scanf("%d", &currentPopulation);

    scanf("%lf", &projection);

     growth = (projection*0.01)*currentPopulation;
     projectedPopulation = currentPopulation + growth;

    printf("%d", (int)projectedPopulation);

    
    return 0;
}
