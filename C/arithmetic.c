#include <stdio.h>
int main() {
    int a,b,sum,sub,mul,div;
    printf("Enter No a:");
    scanf("%d",&a);
    printf("\nENTER No b:");
    scanf("%d",&b);
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    printf("\nSUM = %d",sum);
    printf("\nSUB = %d",sub);   
    printf("\nMUL = %d",mul);
    printf("\nDIV = %d",div);
    return 0;
}