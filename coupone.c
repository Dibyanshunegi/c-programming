#include <stdio.h>
int main()
{
  int num,pcou=0,ncou=0;

  printf("enter a series of numbers and zero to quit\n");

  do {
    scanf("%d", &num);

    if (num>0) {
      pcou++;
    }
    else if (num<0) {
      ncou++;
    }
  }
  while (num!=0);
  printf("positive count =%d and negative count=%d\n",pcou,ncou);
}
