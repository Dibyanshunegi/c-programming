#include <stdio.h>
int main()
{
  char ch='9' ;
  printf("enter chracters to convert and 0 to quit");

  while (ch != 0) {
    
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z') {
      ch+=32;
    }
    else if (ch >='a' && ch<='z')
    {
      ch-=32;
    }
    else {
      continue ;
    }
    printf("%c ", ch);
  }
}