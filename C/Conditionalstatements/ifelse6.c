#include <stdio.h>
int main(){
    int a,b,c;
    printf("ENTER A: ");
    scanf("%d",&a);
    printf("\nENTER B: ");
    scanf("%d",&b);
    printf("\nENTER C: ");
    scanf("%d",&c);
    if(a > b){
        if(a > c){
            printf("\nA=%d is larger",a);
        }else{
            printf("\nC=%d IS greater",c);
        }
    }else{
        if(b >c){
            printf("\nB=%d Is Greater",b);
        }else{
            printf("\nC=%d is GREATER",c);
        }
    }
    return 0;
}