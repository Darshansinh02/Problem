#include <stdio.h>
int main(){
    int i,j,n,z;
    printf("ENTER NUMBER: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        z=65;
        for(j=1;j<=i;j++){
            printf("%c ",z++);
        }
        printf("\n");
    }
    return 0;
}