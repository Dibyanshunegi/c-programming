#include <stdio.h>
int main()
{
  int i=1,N;
  float sum=0.0;
  printf("Enter the value of the series last term\n");
  scanf("%d", &N);

  for (i=1;i<=N;i++) {
    sum=sum+1.0/i;
  }
  printf("sum of series is %.2f",sum);
  return 0;
}