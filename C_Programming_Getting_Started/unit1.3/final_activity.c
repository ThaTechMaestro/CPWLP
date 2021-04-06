#include <stdio.h>

int main(void) {
    int numberOfRobots;
    int height;
    int weight;
    int enginePower;
    int resistanceRating;
    int power;
    int totalPower=0;

    int second_value;
    scanf("%d", &numberOfRobots);



    for (int i = 0; i<numberOfRobots; i++)
    {
      scanf("%d%d%d%d", &height, &weight, &enginePower, &resistanceRating);
      power = (enginePower + resistanceRating) * (weight - height);
      totalPower = totalPower + power;

    }

    printf("%d", totalPower);

    return(0);
}