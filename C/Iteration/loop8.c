#include<stdio.h>
int main(){
    int n,a=1,b=1,c=1,d,i;
    printf("\nENTER NUMBER: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        d =a+b+c;
        a=b;
        b=c;
        c=d;

    }
    return 0;
}