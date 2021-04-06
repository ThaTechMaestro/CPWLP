#include <stdio.h>
int main(void)

{
  double currentMoney;
  double bookPrice;
  double maxNumberOfBookPurchased;
  double result;

    scanf("%lf", &currentMoney);

    scanf("%lf", &bookPrice);

     maxNumberOfBookPurchased = currentMoney/bookPrice;

    printf("%d", (int)maxNumberOfBookPurchased);

    
    return 0;
}
