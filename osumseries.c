#include<stdio.h>
int main()
{
  int i=1,sum=0,N;
  int count=0;
  printf("enter the Nth term : ");
  scanf("%d", &N);
  for(i=1;count<N;count++) {
    sum+=i;
    i+=2;
  }
  printf("sum of %d odd series = %d",N,sum);
}