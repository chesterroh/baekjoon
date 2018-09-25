#include <stdio.h>

int main( void )
{
  char buf[100];
  strcpy(buf,"push");
  char cmdbuf[100];
  int num=0;

  sscanf(buf,"%s %d",cmdbuf,&num);
  printf("%s %d\n",cmdbuf,num);
}
