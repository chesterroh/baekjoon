#include <stdio.h>

int main( void )
{
  char str[200];
  while(fgets(str,101,stdin)){
    printf("%s",str);
  }

}

    
