#include <stdio.h>
int main()
{
  int i,N;
  printf("enter the last term of the pattern :");
  scanf("%d", &N);

  for (i=1;i<=N;i++) {
    printf("%d%d ", i, i);

  }
  return 0;
}