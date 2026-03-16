#include <stdio.h>
int main(){
    int a,b,c,max;
    printf("\nENTER 3 NUMBERS: ");
    scanf("%d %d %d",&a,&b,&c);
    max= (a>b && a>c)? a:(b>a && b>c)?b :c;
    printf("\nLARGEST NUMBER = %d",max);
    return 0;
} 