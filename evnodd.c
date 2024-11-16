#include <stdio.h>
int main()
{
  int i,sum_even=0,sum_odd=0;
  for (i = 1 ; i <= 100 ; i++) {
    if (i%2==0) {
      sum_even+=i;
    }
    else {
      sum_odd+=i;
    }
  }
    printf("the sum of even numbers is %d\n",sum_even);
    printf("the sum of odd numbers is %d\n",sum_odd);

    return 0;
  }
