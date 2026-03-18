#include <stdio.h>
int main(){
    int n,sum=0,a=0,b=1;
    printf("\nENTER Number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        sum = a+b;
        a=b;
        b=sum;
        sum=a;
    }
    return 0;
}