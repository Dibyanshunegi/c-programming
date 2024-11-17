#include <stdio.h>
int main()
{
  int i,j;
  int N;

  printf("enter the last term of the pattern");
  scanf("%d", &N);

  for (i=1;i<=N;i++) {
    for (j=1;j<=i;j++){
      printf("%d",i);
      if (j==i) {
         printf("\n");
      }
    }
  }
}