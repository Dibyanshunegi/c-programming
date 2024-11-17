#include <stdio.h>
int main()
{
  int num   ;
  long fact=1;

  printf("enter a number");
  scanf("%d", &num);

  while (num > 1)
  {
    fact = fact * num;
    num-- ;
  }
  printf("Factorial is : %ld\n", fact);
  return 0;
}