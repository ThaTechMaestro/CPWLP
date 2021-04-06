// Print the x8 multiplication table in a specified format

#include <stdio.h>

int main(void) {
    int first_value;
    int second_value = 8;
    


    for (first_value = 0; first_value<11; first_value++)
    {
      printf("%d*%d = %d\n", first_value, second_value, (first_value*second_value));

    }


    return(0);
}