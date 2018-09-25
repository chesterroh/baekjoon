#include <stdio.h>

int main( int argc, char **argv )
{
  char buf[105];
  char *ptr;
  int count=0;

  scanf("%s",buf);

  ptr = buf;

  while( *ptr != '\0' ){

    if( count == 10 ){
      printf("\n");
      count = 0;
    }

    putchar(*ptr);
    *ptr++;
    count++;
  }
}
