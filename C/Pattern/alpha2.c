#include <stdio.h>
int main(){
    int i,j,n,z=65;
    printf("\nEnter Line Numbers: ");
    scanf("%d",&n);

    for( i =1; i <=n;i++){
        z=65;
        for(j=i; j<=n ;j++){
            printf("%c ",z++);
        }
        printf("\n");
    }
    return 0;
}