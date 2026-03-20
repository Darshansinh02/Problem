#include <stdio.h>
int main(){
    int n,count=0;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    while(n>0){
        count++;
        n = n/10;
    }
    printf("\nTOTAL DIGIT OF NUMBER =%d",count);
    return 0;
}