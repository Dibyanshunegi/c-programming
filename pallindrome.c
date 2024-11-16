#include<stdio.h>
int main()
{
  int num,rev=0,d;
  int og=num;

  printf("Enter the Number : ");
  scanf("%d", &num);

  while (num!=0) {
    d=num%10;
    rev=rev*10 + d;
    num/=10;

  }
  if (og==rev) {
    printf("The given number is PALLINDROME");
  }
  else {
    printf("The given number is NOT A PALLINDROME");
  }
  return 0;
}