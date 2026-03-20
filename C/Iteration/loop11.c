#include <stdio.h>
int main(){
    int n,i,count=0;
    printf("ENTER NUMBER: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count==2){
        printf("\nNOT COMPOSITE NUMBER");
    }
    else{
        printf("\nCOMPOSITE NUMBER");
    }
    return 0;
}