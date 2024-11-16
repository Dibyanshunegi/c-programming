#include <stdio.h>
int main()
{
  int esum=0,N,i=0;
  int count=0;
  printf("Enter the nth term : ");
  scanf("%d", &N);
  for (i=2;count<N;count++) 
  {
    esum+=i;
    i+=2;
  }
  printf("The sum of %d even series is %d",N,esum);
}