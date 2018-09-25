#include <stdio.h>

int main( int argc, char **argv )
{
  FILE *fp;
  char buffer[200];

  fp = fopen("/usr/include/stdio.h","r");

  if( fp == NULL ){
    printf("fp returned NULL\n");
    return -1;
  }

  while( fgets(buffer,200,fp) ){

    if( buffer[0] == '#' )
      printf("%s",buffer);

  }


  fclose(fp);

}
