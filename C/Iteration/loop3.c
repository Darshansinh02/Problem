#include <stdio.h>
int main(){
    int n,fact=1;
    printf("\nEnter Number:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        fact = fact*i;

    }
    printf("\nFACTORIAL: %d",fact);
    return 0;
} 