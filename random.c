#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,i,j=3,k=0,l=0;
    char name[100];

    printf("Who are you?\n");
    printf(">");
    scanf("%s",name);
    printf("\nHello, %s!\n",name);

    printf("Tossing a coin...\n");
    for(i=1;i<=j;i++){
        a=rand()%2;
        if(a){
            printf("Round %d:Heads\n",i);
            k++;
        }
        else{
            printf("Round %d:Tails\n",i);
            l++;
        }
    }
    printf("Heads; %d, Tails: %d\n",k,l);
    if(k>l){
        printf("%s won!\n",name);
    }
    else{
        printf("%s lost!\n");
        
    }
 return 0;
}