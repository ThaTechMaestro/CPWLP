#include <stdio.h>

int main(void) {
  

  int counter;
  int redValue, yellowValue, greenValue;
  int value; 
  double average;
  int total = 0;
  int n = 1;

  scanf("%d", &counter);

  for(int i = 0; i<counter; i++){

    scanf("%d %d %d", &redValue, &yellowValue, &greenValue);
    value = (greenValue*100)+(yellowValue*10)+(redValue);
    total+=value;
    
    average = (double)total/n;
   

     printf("%d. you rolled: %d, current average: %.1lf\n",n ,value, average);
    
     n+=1;


  }

  return 0;

}