#include <stdio.h>
#include <ctype.h>

int main( void ){
    char c;
    int count=0;

    while( (c=getchar()) != EOF ){
        putchar(c);
        if( isalpha(c) )
            printf("It's alpha");

        count++;
    }

    printf("Total alpha count is %d\n",count);
}