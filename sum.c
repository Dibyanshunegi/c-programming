#include <stdio.h>
int main()
{
  int sum=0,num;
  printf("input the value of the number: ");
  scanf("%d" ,&num);
  while (num!=0) {
  sum += num%10;
  num /= 10;
  }
  printf("the sum of digits is %d",sum);
  return 0;

}