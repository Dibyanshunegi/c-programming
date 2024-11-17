#include <stdio.h>
int main() {
  unsigned long num;
  int count=0;

  printf("enter a number:\n");
  scanf("%d", &num);

  while (num<1000000)
  {
    num=num<<1;
    count++;
    printf("%ld\n", num);

  }
  printf("Times to double is %d",count);
  return 0;
}