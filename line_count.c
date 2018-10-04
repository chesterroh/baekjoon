#include <stdio.h>

int main( void ){

    char buf[1000];
    char *c;

    while( gets(buf) != NULL ){
        // counter initialize 
        c = buf ;
        while( *c != '\0'){

            putchar(*c);
            c++;
        }
        printf("\n");
    }
}