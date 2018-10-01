#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *prev;
    struct node *next;
}Node;

Node * node_alloc( void);

int main( int argc, char ** argv){

    Node *head,*p,*prev_p;
    int t_num, j_num ;
    int i ;
    int count = 0 ;
    
    scanf("%d %d",&t_num,&j_num);

    // Create the list 
    for(i=0;i<t_num;i++){

        p = node_alloc();
        p->number = i+1;

        if( i == 0 ){
            head = p;
            p->next = head ;
            p->prev = head ;
        } else {
            prev_p->next = p;
            p->prev = prev_p;
            p->next = head;
        }
        prev_p = p ;

    }/* End of for(  */
    head->prev = p;

    p = head ;
    i = 1 ; 
    printf("<");
    while( count != t_num){
        if ( i % j_num == 0 ){
            if( count == t_num - 1){
                printf("%d",p->number);
                break;
            }
            else    
                printf("%d, ",p->number);
            p->prev->next = p->next;
            p->next->prev = p->prev;
            free(p);
            count++;
        }
        p = p->next;
        i++;
     }
    printf(">\n");
    
}

Node * node_alloc( void ){
    Node *p;

    p= (Node*)malloc(sizeof(Node));

    if(!p){
        fprintf(stdout,"memory allocation error\n");
        return NULL;
    }
    else 
        return p;
}