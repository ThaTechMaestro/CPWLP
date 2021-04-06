#include <stdio.h>
int main(void)

{
  int numberOfGrades;
  int grades;
  int  total = 0;

    scanf("%d", &numberOfGrades);

    for(int i = 0; i < numberOfGrades; i++){

      scanf("%d", &grades);
      total = total + grades;

      


    }

    printf("%.2f", (double)total/numberOfGrades);

    
    return 0;
}
