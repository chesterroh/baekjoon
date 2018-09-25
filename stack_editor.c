#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE   1
#define FALSE  0

typedef struct edit_stack {
    char stack[600000];
    int count;
}stack;

void push(stack*,char);
char pop(stack*);
int isempty(stack*);
char top(stack*);

int main( int argc, char **argv){

    char inputbuf[100000];

    stack lstack, rstack;
    lstack.count = 0 ;
    rstack.count = 0 ;
    int cmd_count=0;
    register int i,j,k;
    char cmd_buf[20];
    int len;

    scanf("%s",inputbuf);
    scanf("%d",&cmd_count);

    /* put all the input to lstack */
    len = strlen(inputbuf);  /* strlen 아래의 for loop 에서 불렀다가 시간초과 열라 먹음 */
    for(i=0;i<len;i++){
        push(&lstack,inputbuf[i]);
    }

    /* input cmd and process */
    for(i=0;i<cmd_count;i++){
        scanf("%s",cmd_buf);

        switch(cmd_buf[0]){

            case 'L':
            if(!isempty(&lstack) )
                push(&rstack,pop(&lstack));
            break;

            case 'D':
            if(!isempty(&rstack))
                push(&lstack,pop(&rstack));
            break;

            case 'B':
            if(!isempty(&lstack))
                pop(&lstack);
            break;

            case 'P':
            scanf("%s",cmd_buf);
            push(&lstack,cmd_buf[0]);
            
            break;
        }/* End of switch(cmd) */
        
    }/* End of for loop */

    /* Copy all the lstack to rstack */
    j = lstack.count;
    for(i=0;i<j;i++){
        push(&rstack,pop(&lstack));
    }

    /* Print out all rstack */
    k = rstack.count;
    for(i=0;i<k;i++){
        printf("%c",pop(&rstack));
    }
    printf("\n");

}

void push( stack *stackp, char c){
    stackp->stack[stackp->count] = c;
    stackp->count++;
}

char pop( stack *stackp ){
    if(stackp->count > 0){
        stackp->count--;
        return stackp->stack[stackp->count];
    }
}

int isempty(stack *stackp){
    if(stackp->count == 0)
        return TRUE;
    else    
        return FALSE;
}

char top( stack *stackp){
    return stackp->stack[stackp->count - 1];
}