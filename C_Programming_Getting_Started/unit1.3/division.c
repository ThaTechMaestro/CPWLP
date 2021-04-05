#include <stdio.h>
int main(void)

{
  double value, output;
    scanf("%lf", &value);
    output = (value*9.0/5.0+32.0);

    printf("%.1lf", output);
    return 0;
}

