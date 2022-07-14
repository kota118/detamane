#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,i,j=3,k=0,l=0;
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
 return 0;
}