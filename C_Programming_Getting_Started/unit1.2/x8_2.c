#include <stdio.h>

int main(void) {
    int first_value;
    int second_value;
    scanf("%d", &second_value);



    for (first_value = 0; first_value<11; first_value++)
    {
      printf("%dx%d = %d\n", first_value, second_value, (first_value*second_value));

    }


    return(0);
}