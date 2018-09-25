#include <stdio.h>

int main( int argc , char **argv )
{
  int length;
  char str_buffer[500];
  int sum=0;
  int i;

  scanf("%d",&length);
  scanf("%s",str_buffer);

  for(i=0;i<length;i++)
    sum += str_buffer[i] - '0';

  printf("%d\n",sum);
  
}

    
