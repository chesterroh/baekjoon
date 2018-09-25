#include <stdio.h>
#include <string.h>

int main( void )
{
    int total_num;
    int stack[10000],stackP=0;
    char buf[100],buf2[100];
    int num=0;
    register int i;

    scanf("%d",&total_num);
        
    for(i=0;i<total_num;i++){
        scanf("%s",buf);
        if(!strncmp(buf,"push",4)){
            scanf("%d",&num);
            stack[stackP++] = num;
        }
        else if(!strncmp(buf,"pop",3)){
            if(stackP == 0){
                printf("-1\n");
                continue;
            } else {
                printf("%d\n",stack[stackP-1]);
                stackP--;
            }
    
        }else if(!strncmp(buf,"top",3)){
            if(stackP == 0){
                printf("-1\n");
                continue;
            }else {
                printf("%d\n",stack[stackP-1]);
            }
        }else if(!strncmp(buf,"size",4)){
            printf("%d\n",stackP);

        }else if(!strncmp(buf,"empty",5)){
            if( stackP > 0 ){
                printf("0\n");
            } else {
                printf("1\n");
            }
        }

    }/* End of for */

}/* End of main() */