#include <stdio.h> 
int main()
{
  int i=1;
  float sum=0.0,term=1.0;

  while (term>0.001){
    sum+=term;
    i+=2;
    term=1.0/i;
  }
  printf("sum of series is %.2f",sum);
  return 0;
}