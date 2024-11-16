#include<stdio.h>
int main()
{
  int i=1,sum=0,N;
  printf("Enter the Nth term : ");
  scanf("%d", &N);
  for(i=1;i<=N;i++) 
  {
    sum=sum+i;
  }
  printf("Sum is : %d\n",sum);
  return 0;
}
