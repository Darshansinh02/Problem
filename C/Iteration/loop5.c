#include<stdio.h>
int main(){
    int n,res=1;
    printf("\nENTER NUMBER: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    res = n*i;
    printf("\n%d * %d = %d",n,i,res);
    }
    return 0;

}