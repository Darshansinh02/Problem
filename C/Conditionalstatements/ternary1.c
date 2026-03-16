#include <stdio.h>
int main(){
    int a,b,max;
    printf("\nENTER 2 NUMBERS: ");
    scanf("%d %d",&a,&b);
    max = a > b ? a : b;
    printf("\nLARGEST NUMBER:%d",max);
    return 0;
} 