#include <stdio.h>
int main(){
    int sum=0,n;
    printf("ENTER NUMBER:");
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        sum=sum + i;
    }
    printf("\nSUM = %d",sum);
    return 0;
}