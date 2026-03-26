#include <stdio.h>
int main(){
    int i,j,n,t=1;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(t<10){
                printf("0");
                printf("%d ",t++);
            }
            printf("\n");
        }
    }
    return 0; 
}