#include <stdio.h>
int main(void)

{
  int matches, box;

    scanf("%d", &matches);
    scanf("%d", &box);

    printf("%d\n", matches/box);
    printf("%d", matches%box);
    return 0;
}