#include<stdio.h>
int main()
{
  int num,revnum=0,remainder;
  printf("Enter the number : ");
  scanf("%d", &num);

  while (num!=0) {
    remainder=num%10;
    revnum=revnum*10+remainder;
    num/=10;
  }
  printf("The reversed number is %d\n",revnum);
  return 0;
}