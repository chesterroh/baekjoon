#include <stdio.h>
#include <string.h>

int main( int argc, char **argv )
{
	char buf[100];
	strcpy(buf,"hello");
	printf("%s",buf);
	printf("%lu\n",strlen(buf));
}
